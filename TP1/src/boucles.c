#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int compteur = (rand() % 9) + 2;
    int i=0;
    for (i=0; i<compteur; i++)
    {
        char character_par_defaut = '*';
        for ();
        printf("*");
    }
    printf("%d",compteur);
    return 0;
}