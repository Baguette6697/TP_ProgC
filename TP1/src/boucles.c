#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); //On genere un nombre aleatoire pour notre triangle.
    int compteur = (rand() % 9) + 2;
    int i, j; // on declare des variable qui vont nous servir de compteur d'iteration. i pour les colonnes et j pour le nombre d'etoiles par lignes.
    
    for (i = 0; i < compteur; i++) //premiere boucle 'for' pour commencer une ligne.
    {
        for (j = 0; j <= i; j++) // deuxieme boucle 'for' pour le nombres d'etoiles par lignes
        {
            printf("*");
        }
        printf("\n"); // on oublie pas de sauter une ligne...
    }
    printf("%d", compteur);
    return 0;
}
