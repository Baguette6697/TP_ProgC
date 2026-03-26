#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Opération (+, -, *, /, %%, &, |, ~) : ");
    if (scanf(" %c", &op) != 1) return 1;

    printf("Premier nombre : ");
    if (scanf("%d", &num1) != 1) return 1;

    // L'opérateur ~ est unaire (ne prend qu'un argument)
    if (op != '~') {
        printf("Second nombre : ");
        if (scanf("%d", &num2) != 1) return 1;
    }

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Erreur : Division par zéro !\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Erreur : Modulo par zéro !\n");
            }
            break;
        case '&':
            result = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, result);
            break;
        case '|':
            result = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, result);
            break;
        case '~':
            result = ~num1;
            printf("~%d = %d\n", num1, result);
            break;
        default:
            printf("Erreur : Opérateur '%c' non reconnu.\n", op);
            break;
    }

    return 0;
}
