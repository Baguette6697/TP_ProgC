#include <stdio.h>

// 1. Définition de la structure RGBA
typedef struct {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
} CouleurRGBA;

int main() {
    // 2. Création d'un tableau de 10 structures
    // 3. Initialisation avec la notation hexadécimale
    CouleurRGBA tableauCouleurs[10] = {
        {0xEF, 0x78, 0x12, 0xFF}, // Couleur 1 (Exemple de l'énoncé)
        {0x2C, 0xC8, 0x64, 0xFF}, // Couleur 2 (Exemple de l'énoncé : 44, 200, 100)
        {0xFF, 0x57, 0x33, 0x80}, // Couleur 3
        {0x33, 0xFF, 0x57, 0xFF}, // Couleur 4
        {0x33, 0x57, 0xFF, 0xAA}, // Couleur 5
        {0xF0, 0xF0, 0xF0, 0xFF}, // Couleur 6
        {0x00, 0x00, 0x00, 0xFF}, // Couleur 7
        {0xFF, 0xFF, 0xFF, 0xFF}, // Couleur 8
        {0x8A, 0x2B, 0xE2, 0xFF}, // Couleur 9
        {0xFF, 0xD7, 0x00, 0xFF}  // Couleur 10
    };

    printf("Gestion des Couleurs RGBA\n");
    printf("--------------------------\n");

    // 4. Affichage des composants de chaque couleur
    for (int i = 0; i < 10; i++) {
        printf("Couleur % d :\n", i + 1);
        printf("  Rouge : %u\n", tableauCouleurs[i].rouge);
        printf("  Vert  : %u\n", tableauCouleurs[i].vert);
        printf("  Bleu  : %u\n", tableauCouleurs[i].bleu);
        printf("  Alpha : %u\n", tableauCouleurs[i].alpha);
        printf("--------------------------\n");
    }

    return 0;
}