#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tableau[100];
    int i;
    int plus_grand, plus_petit;

    // Initialisation du générateur de nombres aléatoires
    // On utilise le temps actuel pour avoir des valeurs différentes à chaque exécution
    srand(time(NULL));

    // 1. Remplissage du tableau avec des valeurs entre 1 et 1000
    for (i = 0; i < 100; i++) {
        // rand() % 1000 donne un nombre entre 0 et 999, on ajoute 1 pour l'intervalle [1, 1000]
        tableau[i] = (rand() % 1000) + 1;
    }

    printf("Tableau non-trie :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);

        // Optionnel : Retour à la ligne tous les 10 nombres pour la lisibilité
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n----------------------------------\n");
    printf("Tableau trie par ordre croissant :\n");

    // Tri à bulles (Bubble Sort)
    int j, temp;
    for (i = 0; i < 99; i++) {
        for (j = 0; j < 99 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 100; i++) {
        printf("%4d ", tableau[i]); // %4d keeps columns aligned
        if ((i + 1) % 10 == 0) printf("\n");
    }
}