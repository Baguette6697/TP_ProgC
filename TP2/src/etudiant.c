#include <stdio.h>

/**
 * @file etudiant.c
 * @brief Programme de gestion des données étudiantes à l'aide de tableaux.
 */

int main() {
    // Déclaration des tableaux
    // 1. Un tableau pour les noms et prénoms (5 étudiants, max 100 caractères par nom/prénom)
    char noms_prenoms[5][100] = {
        "Martin Alice",
        "Bernard Lucas",
        "Dubois Emma",
        "Thomas Gabriel",
        "Robert Jade"
    };

    // 2. Un autre tableau pour les adresses
    char adresses[5][200] = {
        "10 Rue de la République, 59000 Lille",
        "25 Boulevard Victor Hugo, 75000 Paris",
        "5 Avenue des Champs, 69000 Lyon",
        "12 Place du Capitole, 31000 Toulouse",
        "8 Rue de la Paix, 44000 Nantes"
    };

    // 3. Deux tableaux pour les notes dans les deux modules
    float notes_programmation[5] = {16.5, 14.0, 18.5, 12.0, 15.5};
    float notes_systeme[5] = {14.5, 13.0, 17.0, 15.0, 16.0};

    // Affichage des détails de chaque étudiant
    printf("Gestion des Données Étudiantes\n");
    printf("==============================\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("  Nom et Prénom : %s\n", noms_prenoms[i]);
        printf("  Adresse       : %s\n", adresses[i]);
        printf("  Note Programmation en C   : %.2f\n", notes_programmation[i]);
        printf("  Note Système d'exploitation : %.2f\n", notes_systeme[i]);
        printf("------------------------------\n");
    }

    return 0;
}
