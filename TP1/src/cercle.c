#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    double rayon;
    printf("Entrez le rayon de votre cercle et je vous donnerais son aire et son perimetre\n"
           "rayon en [mm] =");

    scanf("%lf", &rayon);

    double aire_cercle = M_PI * rayon * rayon;
    double perimetre = (2 * rayon) * M_PI;

    printf("\nl'air de votre cercle est de %.4f [mm²]\n", aire_cercle);
    printf("le permietre de votre cerlce est de %.4f [mm]\n", perimetre);

}

