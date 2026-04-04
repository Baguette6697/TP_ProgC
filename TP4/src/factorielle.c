#include <stdio.h>

/**
 * @brief Calcule la factorielle d'un nombre saisi par l'utilisateur et affiche le détail du calcul.
 */
void factoriel()
{
    int n;
    int i;
    double result = 1.0;

    printf("Selectionnez le n du factoriel : ");
    if (scanf("%d", &n) != 1) {
        printf("Erreur : veuillez entrer un nombre entier valide.\n");
        return;
    }

    if (n < 0) {
        printf("Erreur : la factorielle n'est pas definie pour les nombres negatifs.\n");
        return;
    }

    if (n == 0) {
        printf("0! = 1\n");
        return;
    }

    // Affichage et calcul
    printf("%d", n);
    result = (double)n;

    for (i = n - 1; i >= 1; i--)
    {
        printf(" x %d", i);
        result *= i;
    }

    printf(" = %.0f\n", result);
}

int main()
{
    factoriel(); // test de la fonction factorielle
    return 0;
}
