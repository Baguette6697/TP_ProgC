#include <stdio.h>

int main()
{
    char Hello[] = "Hello ";
    char World[] = "World!";
    char result[50]; // Buffer large enough to hold both
    int i = 0, j = 0;

    // Calculate length of Hello and copy it to result
    while (Hello[i] != '\0')
    {
        result[i] = Hello[i];
        i++;
    }

    int taille_hello = i;
    printf("La taille de la premiere chaine est de : %d caracteres\n", taille_hello);

    // Append World to result
    while (World[j] != '\0')
    {
        result[i] = World[j];
        i++;
        j++;
    }

    // Add the null terminator at the end
    result[i] = '\0';

    printf("Chaine fusionnee : %s\n", result);

    return 0;
}
