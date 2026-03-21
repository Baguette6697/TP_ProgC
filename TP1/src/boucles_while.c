#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); //On genere un nombre aleatoire pour notre triangle.
    int compteur = (rand() % 9) + 2;
    // on declare des variable qui vont nous servir de compteur d'iteration. i pour les colonnes et j pour le nombre d'etoiles par lignes.
    int i = 0;
    int j;
    
    while (i < compteur) //premiere boucle 'while' pour commencer une ligne.
    {
        j = 0;
        while (j <= i) // deuxieme boucle 'while' pour le nombres d'etoiles par lignes
        {
            if (j == 0 || j == i || i == compteur-1) { //On rajoute une condition pour faire en sort que nous ayons des # a coeur du triangle.
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n"); // on oublie pas de sauter une ligne...
        i++;
    }
    printf("%d", compteur);
    return 0;
}
