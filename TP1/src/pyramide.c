#include <stdio.h>
#include <stdlib.h> // Pour rand() et srand()
#include <time.h>   // Pour time()

int main() {
    // 1. Déclaration des variables
    int n;
    int i, j;

    // 2. Initialisation de n comme variable aléatoire entre 2 et 10
    // On initialise le générateur de nombres aléatoires sur l'heure actuelle
    srand(time(NULL));
    n = (rand() % 9) + 2; // (rand % 9) donne 0-8, + 2 donne 2-10

    printf("Génération d'une pyramide de hauteur : %d\n\n", n);

    // 3. Boucle de génération de la pyramide
    for (i = 1; i <= n; i++) {

        // Boucle pour les espaces (centrage)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Partie croissante : de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Partie décroissante : de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4. Passage à la ligne suivante
        printf("\n");
    }

    // 5. Terminaison
    printf("\nLa génération de la pyramide est terminée.\n");

    return 0;
}