#include <stdio.h>

int main()
{

    int a = 16;
    int b = 3;

    printf("Addition : a+b=%d \n", a+b);
    printf("Soustraction : a-b=%d \n", a-b);
    printf("Multiplication : a+b=%d \n", a+b);
    printf("Division avec des integer : a/b=%d \n", a/b); // Dans ce cas la on applique striqutement la consigne mais ducoup on obtient un integer vu que on fait la division de deux integer. Au lieu d'avoir le resultat exact.
    printf("Division avec des float (bonus): a/b=%.4f \n", (float)a / (float)b); // Dans ce cas present j'ai prefere transformer a et b en float histoires d'avoir les chiffres apres la virgules.
    printf("Modulo : a/b=%f \n", a%b);
    printf("sortie d'un bouleen pour a>b : %b \n"
           "1 veux dire *Vrai* | 0 veux dire *Faux*\n", a>b);

    return 0;

}

