#include "operator.h"
#include <stdio.h>

int somme(int a, int b) { return a + b; }
int difference(int a, int b) { return a - b; }
int produit(int a, int b) { return a * b; }

int quotient(int a, int b) {
    if (b != 0) return a / b;
    printf("Erreur : Division par zéro !\n");
    return 0;
}

int modulo(int a, int b) {
    if (b != 0) return a % b;
    return 0;
}

int et_logique(int a, int b) { return a & b; } // Bitwise AND
int ou_logique(int a, int b) { return a | b; } // Bitwise OR
int negation(int a) { return ~a; }             // Bitwise NOT