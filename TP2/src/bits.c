#include <stdio.h>

int main() {
    // 1. Déclaration et initialisation
    // Note : 0x80000000 est un exemple de valeur où le 1er bit est à 1
    // Pour tester le 4ème (index 28) et le 20ème (index 12), utilisons une valeur hexadécimale
    unsigned int d = 0x10001000; // 0x1... (4e bit à 1) et ...1... (20e bit à 1)

    // 2. Extraction et vérification
    // On décale le bit visé vers la position 0, puis on applique un masque & 1
    int bit4  = (d >> 28) & 1;
    int bit20 = (d >> 12) & 1;

    // 3. Vérification si les deux sont à 1
    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}