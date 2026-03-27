#include <stdio.h>

int main() {
    int n, i;
    long t1 = 0, t2 = 1, suivant;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);
    printf("Suite de Fibonacci jusqu'à U%d : ", n);

    for (i = 0; i <= n; i++) {
        if (i == 0) {
            printf("%ld", t1);
        } else if (i == 1) {
            printf(", %ld", t2);
        } else {
            suivant = t1 + t2;
            t1 = t2;
            t2 = suivant;
            printf(", %ld", suivant);
        }
    }

    printf("\n");
    return 0;
}