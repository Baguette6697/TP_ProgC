#include <stdio.h>
#include "fichier.h"

int main() {
    int choice;
    char filename[100];
    char content[1000];

    printf("1. Write\n2. Read\nChoice: ");
    scanf("%d", &choice);
    getchar(); // Clean the buffer

    if (choice == 1) {
        printf("Filename: ");
        fgets(filename, sizeof(filename), stdin);
        filename[strcspn(filename, "\n")] = 0;

        printf("Content: ");
        fgets(content, sizeof(content), stdin);

        // APPEL DE LA FONCTION
        ecrire_dans_fichier(filename, content);

    } else if (choice == 2) {
        printf("Filename: ");
        fgets(filename, sizeof(filename), stdin);
        filename[strcspn(filename, "\n")] = 0;

        // APPEL DE LA FONCTION
        lire_fichier(filename);
    }

    return 0;
}