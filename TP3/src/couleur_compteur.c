#include <stdio.h>
#include <stdbool.h>

// 1. Structure pour stocker les détails d'une couleur
typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

// Structure pour stocker une couleur distincte et son nombre d'occurrences
typedef struct {
    Couleur couleur;
    int nb_occurrences;
} CompteurCouleur;

// Fonction utilitaire pour comparer deux couleurs
bool sont_identiques(Couleur c1, Couleur c2) {
    return (c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a);
}

int main() {
    // 2. Créer un tableau de 100 couleurs
    Couleur tableau[100];

    // Initialisation factice pour l'exemple (remplit avec quelques répétitions)
    // Dans un cas réel, ces données pourraient venir d'un fichier ou d'une saisie
    for (int i = 0; i < 100; i++) {
        if (i % 3 == 0) {
            tableau[i] = (Couleur){0xFF, 0x23, 0x23, 0x45};
        } else if (i % 3 == 1) {
            tableau[i] = (Couleur){0xFF, 0x00, 0x23, 0x12};
        } else {
            tableau[i] = (Couleur){0xAA, 0xBB, 0xCC, 0xDD};
        }
    }

    // 3. Compter les couleurs distinctes
    CompteurCouleur distinctes[100];
    int nb_distinctes = 0;

    for (int i = 0; i < 100; i++) {
        bool trouve = false;

        // Vérifier si la couleur existe déjà dans notre liste de couleurs distinctes
        for (int j = 0; j < nb_distinctes; j++) {
            if (sont_identiques(tableau[i], distinctes[j].couleur)) {
                distinctes[j].nb_occurrences++;
                trouve = true;
                break;
            }
        }

        // Si elle n'existe pas, on l'ajoute
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].nb_occurrences = 1;
            nb_distinctes++;
        }
    }

    // Affichage des résultats
    printf("Couleurs distinctes trouvees :\n");
    printf("------------------------------\n");
    for (int i = 0; i < nb_distinctes; i++) {
        printf("0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
                distinctes[i].couleur.r,
                distinctes[i].couleur.g,
                distinctes[i].couleur.b,
                distinctes[i].couleur.a,
                distinctes[i].nb_occurrences);
    }

    return 0;
}