#include <stdio.h>
#include <stdlib.h>
#include "repertoire.h"

int main(int argc, char *argv[]) {
    // 1. Vérification de l'argument (le nom du répertoire au lancement)
    if (argc != 2) {
        printf("Utilisation : %s <nom_du_repertoire>\n", argv[0]);
        return 1;
    }

    char *nom_repertoire = argv[1];
    int choix = 0;

    // 2. Menu interactif
    printf("--- Menu de gestion de répertoire ---\n");
    printf("Répertoire cible : %s\n", nom_repertoire);
    printf("1. Liste simple (fichiers au premier niveau)\n");
    printf("2. Liste récursive (inclure tous les sous-dossiers)\n");
    printf("3. Liste itérative de fichiers et répertoires dans un dossier\n");
    printf("4. Quitter\n");
    printf("Votre choix : ");

    // Lecture du choix de l'utilisateur
    if (scanf("%d", &choix) != 1) {
        printf("Erreur : veuillez entrer un nombre.\n");
        return 1;
    }

    printf("\n--- Résultats ---\n");

    // 3. Action selon le choix
    switch (choix) {
    case 1:
        printf("Lecture simple :\n");
        lire_dossier(nom_repertoire);
        break;
    case 2:
        printf("Lecture récursive :\n");
        lire_dossier_recursif(nom_repertoire);
        break;
    case 3:
        printf("Liste itérative de fichiers :\n");
        lire_dossier_iteratif(nom_repertoire);
        break;
    case 4:
        printf("Au revoir !\n");
        break;
    default:
        printf("Choix invalide.\n");
        break;
    }

    return 0;
}

