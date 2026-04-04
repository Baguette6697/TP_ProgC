#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIGNE 1024

int main() {
    char nomFichier[100];
    char phraseRecherchee[100];
    char ligne[MAX_LIGNE];
    FILE *fichier = NULL;
    int numLigne = 0;
    int occurrencesTotales = 0;

    // 1. Demander le nom du fichier
    printf("Entrez le nom du fichier : ");
    scanf("%99s", nomFichier);

    // Vider le tampon pour pouvoir utiliser fgets après
    getchar();

    // 2. Demander la phrase à rechercher
    printf("Entrez la phrase a rechercher : ");
    fgets(phraseRecherchee, sizeof(phraseRecherchee), stdin);

    // Supprimer le caractère de nouvelle ligne '\n' capturé par fgets
    phraseRecherchee[strcspn(phraseRecherchee, "\n")] = 0;

    // 3. Ouvrir le fichier
    fichier = fopen(nomFichier, "r");

    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier '%s'.\n", nomFichier);
        return 1;
    }

    printf("\n--- Resultats de la recherche ---\n");

    // 4. Parcourir chaque ligne du fichier
    while (fgets(ligne, MAX_LIGNE, fichier) != NULL) {
        numLigne++;
        int compteurLigne = 0;
        char *ptr = ligne;

        // 5. Compter les occurrences dans la ligne actuelle
        while ((ptr = strstr(ptr, phraseRecherchee)) != NULL) {
            compteurLigne++;
            ptr += strlen(phraseRecherchee); // Avancer le pointeur après la phrase trouvée
        }

        // Afficher si la phrase est présente
        if (compteurLigne > 0) {
            printf("Ligne %d : %d occurrence(s) trouvee(s).\n", numLigne, compteurLigne);
            occurrencesTotales += compteurLigne;
        }
    }

    if (occurrencesTotales == 0) {
        printf("La phrase n'a ete trouvee dans aucune ligne.\n");
    }

    // 7. Fermer le fichier
    fclose(fichier);

    return 0;
}