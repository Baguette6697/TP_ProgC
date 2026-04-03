#include <stdio.h>
#include <string.h>
#include "fichier.h"

int main() {
    int choice;
    char filename[100];
    char content[1000];

    printf("Bienvenu dans le fichier de lecture/ecriture de Clement BOUVERET.\n"
           "choisissez l'action que vous souhaitez effectuer:\n");
    printf("1. Ecriture\n2. Lecture\nVotre choix (entrez le numero): ");
    scanf("%d", &choice);
    getchar(); // Clean the buffer

    if (choice == 1) {
        printf("Nom du fichier ");
        fgets(filename, sizeof(filename), stdin);
        filename[strcspn(filename, "\n")] = 0;

        printf("Contenu du fichier : ");
        fgets(content, sizeof(content), stdin);

        // APPEL DE LA FONCTION
        ecrire_dans_fichier(filename, content);

    } else if (choice == 2) {
        printf("Nom du fichier : ");
        fgets(filename, sizeof(filename), stdin);
        filename[strcspn(filename, "\n")] = 0;

        // APPEL DE LA FONCTION
        lire_fichier(filename);
    }

    return 0;
}