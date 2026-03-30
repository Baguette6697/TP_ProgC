#include <stdio.h>

/**
 * Affiche les octets d'une variable donnée par son adresse et sa taille.
 */
void printBytes(void *ptr, size_t size) {
    unsigned char *p = (unsigned char *)ptr;
    for (size_t i = 0; i < size; i++) {
        printf(" %02x", p[i]);
    }
    printf("\n");
}

int main() {
    short s = 0x0102;
    int i = 0x01020304;
    long int li = 0x0102030405060708L;
    float f = 1.0f;
    double d = 1.0;
    long double ld = 1.0L;

    printf("Octets de short :\n");
    printBytes(&s, sizeof(s));

    printf("\nOctets de int :\n");
    printBytes(&i, sizeof(i));

    printf("\nOctets de long int :\n");
    printBytes(&li, sizeof(li));

    printf("\nOctets de float :\n");
    printBytes(&f, sizeof(f));

    printf("\nOctets de double :\n");
    printBytes(&d, sizeof(d));

    printf("\nOctets de long double :\n");
    printBytes(&ld, sizeof(ld));

    return 0;
}