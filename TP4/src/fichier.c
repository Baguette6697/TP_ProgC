#include "fichier.h"
#include <stdio.h>
#include <stdlib.h>


void lire_fichier(const char *filename) {
    FILE *fptr = fopen(filename, "r");
    char buffer[255];
    if (fptr == NULL) {
        perror("Error");
        return;
    }
    printf("\n--- Reading %s ---\n", filename);
    while (fgets(buffer, sizeof(buffer), fptr)) {
        printf("%s", buffer);
    }
    fclose(fptr);
}

void ecrire_dans_fichier(const char *filename, const char *content) {
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        perror("Error");
        return;
    }
    fputs(content, fptr);
    fclose(fptr);
    printf("Action completed: Data written to %s\n", filename);
}

//---------------------------------------------------