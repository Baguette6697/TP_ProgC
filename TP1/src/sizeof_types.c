#include <stdio.h>

int main()
{
    // titre des colonnes
    printf("%-3s | %-15s | %-15s\n", "#", "type", "nombre d'octets");
    printf("--------------------------------------\n");

    // contenue du tableau
    printf("1   | %-15s | %-15zu\n", "char", sizeof(char));
    printf("2   | %-15s | %-15zu\n", "short", sizeof(short));
    printf("3   | %-15s | %-15zu\n", "int", sizeof(int));
    printf("4   | %-15s | %-15zu\n", "long int", sizeof(long int));
    printf("5   | %-15s | %-15zu\n", "long long int", sizeof(long long int));
    printf("6   | %-15s | %-15zu\n", "float", sizeof(float));
    printf("7   | %-15s | %-15zu\n", "double", sizeof(double));
    printf("8   | %-15s | %-15zu\n", "long double", sizeof(long double));
}