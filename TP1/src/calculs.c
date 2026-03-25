#include <stdio.h>
#include <stdbool.h>


int main()
{
    int num1;
    int num2;
    char op;

    printf("Rentrez au clavier le type d'operation que vous voudriez faire : \n options :'+', '-', '*', '/', '%', '&', '|', '~'");
    scanf("\n %c", &op);

    printf("Rentrez le premier nombre au clavier puis appuyez sur 'enter' :");
    scanf("\n %d", &num1);

    printf("Rentrez le second nombre au clavier puis appuyez sur 'enter' :");
    scanf("\n %d", &num2);

    switch (op)
    {
        case '+':
            int result = num1+num2;
            printf("%d+%d=%d",num1, num2, result);
            return result;

        case '-':
            int result = num1-num2;
            printf("%d-%d=%d",num1, num2, result);
            return result;

        case '*':
            int result = num1*num2;
            printf("%d*%d=%d",num1, num2, result);
            return result;

        case '/':
            int result = num1/num2;
            printf("%d/%d=%d",num1, num2, result);
            return result;

        case '&':
            bool result = num1&num2;
            printf("%d&%d=%d",num1, num2, result);
            return result;

        case '|':
            bool result = num1|num2;
            printf("%d|%d=%d",num1, num2, result);
            return result;

        case '~':
            int result = num1~num2;
            printf("%d~%d=%d",num1, num2, result);
            return result;

        default:
            printf("\n Operation impossible. Veuillez reessayer. \n *attention!* \n la fonction n'accepte que des nombres entier.");
    }
    return 0;
}