#include "fichier.h"
#include <stdio.h>
#include <stdlib.h>


void lire_fichier(const char *filename) {
    FILE *fptr = fopen(filename, "r");
    char buffer[255];
    if (fptr == NULL) {
        perror("Erreur");
        return;
    }
    printf("\n--- Lecture de %s ---\n", filename);
    while (fgets(buffer, sizeof(buffer), fptr)) {
        printf("%s", buffer);
    }
    printf("\n--- Fin du fichier ---\n");
    fclose(fptr);
}

void ecrire_dans_fichier(const char *filename, const char *content) {
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        perror("Erreur");
        return;
    }
    fputs(content, fptr);
    fclose(fptr);
    printf("Action enregistre: fichier sauvegarder avec le nom %s\n", filename);
}

//---------------------------------------------------