#include <stdio.h>
#include <dirent.h> // Indispensable pour opendir et readdir
#include "repertoire.h"
#include <string.h>
#include <stdlib.h>

#define MAX_PATH 1024
#define MAX_STACK 512

//-----------Exercice 5.1-----------------
void lire_dossier(const char *nom_repertoire) {
    // 1. Déclarer un pointeur vers le dossier et une structure pour les entrées
    DIR *dossier;
    struct dirent *entree;

    // 2. Tenter d'ouvrir le répertoire
    dossier = opendir(nom_repertoire);

    // Vérification : si le dossier n'existe pas ou n'est pas accessible
    if (dossier == NULL) {
        perror("Erreur lors de l'ouverture du répertoire");
        return;
    }

    // 3. Boucler sur chaque élément du dossier
    // readdir renvoie NULL quand il n'y a plus rien à lire
    while ((entree = readdir(dossier)) != NULL) {
        // On affiche le nom du fichier/dossier actuel
        printf("%s\n", entree->d_name);
    }

    // 4. Fermer le flux
    closedir(dossier);
}


//-----------Exercice 5.2-----------------
void lire_dossier_recursif(const char *nom_repertoire) {
    DIR *d = opendir(nom_repertoire);
    struct dirent *entree;
    char chemin_complet[1024]; // Stocke le chemin pour l'appel suivant

    if (d == NULL) {
        return; // On ne peut pas ouvrir, on s'arrête là
    }

    while ((entree = readdir(d)) != NULL) {
        // 1. Ignorer les entrées spéciales "." et ".." pour éviter une boucle infinie
        if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0) {
            continue;
        }

        // 2. Afficher le nom de l'élément actuel
        printf("%s/%s\n", nom_repertoire, entree->d_name);

        // 3. Si l'élément est un répertoire, on "plonge" dedans
        // DT_DIR est une macro qui signifie "Directory"
        if (entree->d_type == DT_DIR) {
            // On construit le nouveau chemin : "nom_repertoire/entree->d_name"
            snprintf(chemin_complet, sizeof(chemin_complet), "%s/%s", nom_repertoire, entree->d_name);

            // Appel récursif !
            lire_dossier_recursif(chemin_complet);
        }
    }

    closedir(d);
}

//-----------Exercice 5.3-----------------
void lire_dossier_iteratif(const char *nom_repertoire) {
    // Une pile pour stocker les chemins des dossiers à visiter
    char pile[MAX_STACK][MAX_PATH];
    int sommet = -1;

    // On commence par ajouter le dossier initial dans la pile
    strncpy(pile[++sommet], nom_repertoire, MAX_PATH);

    while (sommet >= 0) {
        // On récupère le dernier dossier ajouté (LIFO - Last In First Out)
        char chemin_actuel[MAX_PATH];
        strncpy(chemin_actuel, pile[sommet--], MAX_PATH);

        DIR *d = opendir(chemin_actuel);
        if (d == NULL) continue;

        struct dirent *entree;
        while ((entree = readdir(d)) != NULL) {
            // Ignorer . et ..
            if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0) {
                continue;
            }

            // Affichage de l'élément
            printf("%s/%s\n", chemin_actuel, entree->d_name);

            // Si c'est un dossier, on l'ajoute à la pile pour une visite future
            if (entree->d_type == DT_DIR) {
                if (sommet < MAX_STACK - 1) {
                    sommet++;
                    snprintf(pile[sommet], MAX_PATH, "%s/%s", chemin_actuel, entree->d_name);
                } else {
                    fprintf(stderr, "Erreur : Pile trop petite pour la profondeur du répertoire.\n");
                }
            }
        }
        closedir(d);
    }
}