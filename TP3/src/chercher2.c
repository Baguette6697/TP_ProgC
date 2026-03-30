#include <stdio.h>

/**
 * Programme : chercher2.c
 * Description : Recherche une phrase dans un tableau de 10 phrases
 *               sans utiliser de fonctions de bibliothèques standards pour la comparaison.
 */

int main() {
    // Tableau de 10 phrases (tableau de pointeurs de caractères)
    const char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char phrase_recherchee[100];
    int trouve = 0;

    printf("Entrez la phrase a rechercher : ");
    // Lecture de la phrase (jusqu'au retour a la ligne)
    // On utilise scanf avec [^\n] pour lire les espaces
    if (scanf(" %[^\n]", phrase_recherchee) != 1) {
        return 1;
    }

    // Parcourir chaque phrase du tableau
    for (int i = 0; i < 10; i++) {
        const char *phrase_tableau = phrases[i];
        int j = 0;
        int correspondance = 1;

        // Comparer chaque caractère un par un
        // On s'arrête si l'un des deux arrive a la fin (\0)
        while (phrase_tableau[j] != '\0' || phrase_recherchee[j] != '\0') {
            if (phrase_tableau[j] != phrase_recherchee[j]) {
                correspondance = 0;
                break;
            }
            j++;
        }

        // Si correspondance parfaite trouvee
        if (correspondance) {
            trouve = 1;
            break;
        }
    }

    // Affichage du resultat final
    if (trouve) {
        printf("Phrase trouvee\n");
    } else {
        printf("Phrase non trouvee\n");
    }

    return 0;
}
