#include "operator.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <operator> <operand1> [operand2]\n", argv[0]);
        printf("Operators: +, -, *, /, %%, &, |, ~\n");
        return 1;
    }

    char *op = argv[1];
    int a = atoi(argv[2]);
    int result;

    if (strcmp(op, "~") == 0) {
        result = negation(a);
        printf("~%d = %d\n", a, result);
        return 0;
    }

    if (argc < 4) {
        printf("Error: Operator '%s' requires two operands.\n", op);
        return 1;
    }

    int b = atoi(argv[3]);

    if (strcmp(op, "+") == 0) {
        result = somme(a, b);
        printf("%d + %d = %d\n", a, b, result);
    } else if (strcmp(op, "-") == 0) {
        result = difference(a, b);
        printf("%d - %d = %d\n", a, b, result);
    } else if (strcmp(op, "*") == 0) {
        result = produit(a, b);
        printf("%d * %d = %d\n", a, b, result);
    } else if (strcmp(op, "/") == 0) {
        result = quotient(a, b);
        if (b != 0) printf("%d / %d = %d\n", a, b, result);
    } else if (strcmp(op, "%") == 0) {
        result = modulo(a, b);
        if (b != 0) printf("%d %% %d = %d\n", a, b, result);
    } else if (strcmp(op, "&") == 0) {
        result = et_logique(a, b);
        printf("%d & %d = %d\n", a, b, result);
    } else if (strcmp(op, "|") == 0) {
        result = ou_logique(a, b);
        printf("%d | %d = %d\n", a, b, result);
    } else {
        printf("Error: Unknown operator '%s'\n", op);
        return 1;
    }

    return 0;
}