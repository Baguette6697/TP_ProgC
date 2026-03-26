#include <stdio.h>

int main() {
    int numero;
    printf("Entrez le numero que vous souhaitez transformer en binaire : ");
    
    if (scanf("%d", &numero) == 1) {
        printf("Binaire : ");
        
        unsigned int masque = 1u << 31; // Masque pour le bit de poids fort (32 bits)
        int a_commence = 0;             // Pour ignorer les zéros inutiles au début

        for (int i = 0; i < 32; i++) {
            if ((numero & masque) != 0) {
                printf("1");
                a_commence = 1;
            } else {
                // On affiche '0' seulement si on a déjà commencé à afficher des '1'
                // ou si c'est le dernier bit (pour que 0 s'affiche comme "0")
                if (a_commence || i == 31) {
                    printf("0");
                }
            }
            masque >>= 1; // On décale le masque vers la droite
        }
        printf("\n");
    } else {
        printf("Erreur de saisie.\n");
        return 1;
    }

    return 0;
}


