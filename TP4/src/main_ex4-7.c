#include "liste.h"
#include <stdio.h>

int main() {
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    // Creating 10 colors
    struct couleur palette[10] = {
        {0xFF, 0x00, 0x00, 0xFF}, // Red
        {0x00, 0xFF, 0x00, 0xFF}, // Green
        {0x00, 0x00, 0xFF, 0xFF}, // Blue
        {0xFF, 0xFF, 0x00, 0xFF}, // Yellow
        {0xFF, 0x00, 0xFF, 0xFF}, // Magenta
        {0x00, 0xFF, 0xFF, 0xFF}, // Cyan
        {0xFF, 0xA5, 0x00, 0xFF}, // Orange
        {0x80, 0x00, 0x80, 0xFF}, // Purple
        {0xFF, 0xFF, 0xFF, 0xFF}, // White
        {0x00, 0x00, 0x00, 0xFF}  // Black
    };

    // Inserting them into the list
    for(int i = 0; i < 10; i++) {
        insertion(&palette[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);

    return 0;
}