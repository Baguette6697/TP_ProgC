#include <stdio.h>

int main() {
    // Déclaration d'un tableau de 10 pointeurs vers des chaînes de caractères
    const char *phrases[10] = {
        "Le ciel est bleu.",
        "Le code est propre.",
        "Le café est chaud.",
        "L'hiver arrive.",
        "Apprendre est utile.",
        "La logique est clé.",
        "Le curseur clignote.",
        "Le bug est fixé.",
        "La compilation réussit.",
        "Le script se termine."
    };

    // Exemple de manipulation : Affichage de chaque phrase avec son index
    printf("Contenu du tableau :\n");
    for (int i = 0; i < 10; i++) {
        printf("Phrase %d : %s\n", i + 1, phrases[i]);
    }

    return 0;
}
