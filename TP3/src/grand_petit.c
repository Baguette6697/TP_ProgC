#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
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

    // 2. Initialisation des variables min et max avec le premier élément du tableau
    plus_grand = tableau[0];
    plus_petit = tableau[0];

    // 3. affichage du tableau de donnée

    printf("Contenu du tableau :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);

        // Optionnel : Retour à la ligne tous les 10 nombres pour la lisibilité
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n--------------------------\n");

    // 4. Parcours du tableau pour trouver les extrêmes
    for (i = 1; i < 100; i++) {
        if (tableau[i] > plus_grand) {
            plus_grand = tableau[i];
        }
        if (tableau[i] < plus_petit) {
            plus_petit = tableau[i];
        }
    }

    // 4. Affichage des résultats
    printf("Le numero le plus grand est : %d\n", plus_grand);
    printf("Le numero le plus petit est : %d\n", plus_petit);

    return 0;
}