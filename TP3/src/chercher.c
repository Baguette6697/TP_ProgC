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

    printf("Tableau de donnee :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);

        // Optionnel : Retour à la ligne tous les 10 nombres pour la lisibilité
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    int choix;
    printf("\n entrez le numero a rechercher :");
    scanf("%d", &choix);

    int trouve = 0;
    for (i = 0; i < 100; i++) {
        if (tableau[i] == choix) {
            printf("Le nombre %d a ete trouve a l'indice %d.\n", choix, i);
            trouve = 1;
            break;
        }
    }

    if (trouve == 0) {
        printf("Le nombre %d n'est pas dans le tableau.\n", choix);
    }

    return 0;
}