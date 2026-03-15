#include <stdio.h>

int main()
{
    // titre des colonnes
    printf("%-3s | %-15s | %-25s | %-25s\n", "#", "type", "nombre d'octets signe", "nombre d'oct non-signe");
    printf("-----------------------------------------------------------------\n");

    // contenue du tableau
    printf("1   | %-15s | %-25zu | %-25zu\n", "char", sizeof(signed char), sizeof(unsigned char));
    printf("2   | %-15s | %-25zu | %-25zu\n", "short", sizeof(signed short), sizeof(unsigned short));
    printf("3   | %-15s | %-25zu | %-25zu\n", "int", sizeof(signed int), sizeof(unsigned int));
    printf("4   | %-15s | %-25zu | %-25zu\n", "long int", sizeof(signed long int), sizeof(unsigned long int));
    printf("5   | %-15s | %-25zu | %-25zu\n", "long long int", sizeof(signed long long int), sizeof(unsigned long long int));
    printf("-------cas ou il n'y a pas de version 'signed' ou 'unsigned'-----\n");
    printf("6   | %-15s | %-25zu | %-25zu\n", "float", sizeof(float), sizeof(float));
    printf("7   | %-15s | %-25zu | %-25zu\n", "double", sizeof(double), sizeof(double));
    printf("8   | %-15s | %-25zu | %-25zu\n", "long double", sizeof(long double), sizeof(long double));
}