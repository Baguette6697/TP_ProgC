#include <stdio.h>

int main()
{
    int a, b;
    float resultat=1;
    printf("entrez un premier nombre entier=");
    scanf("%d", &a);
    printf("entrez la puissance. (doit etre un entier positif)");
    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        resultat=resultat*a;
    }

    printf("%d eleve a la puissance %d est : %f\n", a, b, resultat);
}