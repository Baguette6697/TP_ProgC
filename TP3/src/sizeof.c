#include <stdio.h>

int main() {
    printf("Taille des types de base :\n");
    printf("La taille de char    : %zu octets\n", sizeof(char));
    printf("La taille de int     : %zu octets\n", sizeof(int));
    printf("La taille de float   : %zu octets\n", sizeof(float));
    printf("La taille de double  : %zu octets\n", sizeof(double));

    printf("\nTailled des pointeurs (Architecture 64 bits) :\n");
    // Pointeurs sur int
    printf("La taille de int* : %zu octets\n", sizeof(int*));
    printf("La taille de int** : %zu octets\n", sizeof(int**));

    // Pointeurs sur char
    printf("La taille de char* : %zu octets\n", sizeof(char*));
    printf("La taille de char** : %zu octets\n", sizeof(char**));
    printf("La taille de char*** : %zu octets\n", sizeof(char***));

    // Pointeurs sur float
    printf("La taille de float* : %zu octets\n", sizeof(float*));
    printf("La taille de float** : %zu octets\n", sizeof(float**));
    printf("La taille de float***: %zu octets\n", sizeof(float***));

    return 0;
}