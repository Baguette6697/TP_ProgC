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

    // Binary Search (Recherche dichotomique)
    int recherche, bas, haut, milieu, trouve;
    printf("\nEntrez le nombre a rechercher : ");
    scanf("%d", &recherche);

    bas = 0;
    haut = 99;
    trouve = 0;

    while (bas <= haut && !trouve) {
        milieu = (bas + haut) / 2;
        if (tableau[milieu] == recherche) {
            trouve = 1;
        } else if (tableau[milieu] < recherche) {
            bas = milieu + 1;
        } else {
            haut = milieu - 1;
        }
    }

    if (trouve) {
        printf("\nLe nombre %d a ete trouve a l'indice %d.\n", recherche, milieu);
    } else {
        printf("\nLe nombre %d n'est pas dans le tableau.\n", recherche);
    }

    return 0;
    }