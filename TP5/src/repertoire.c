#include <stdio.h>
#include <dirent.h> // Indispensable pour opendir et readdir
#include "repertoire.h"

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