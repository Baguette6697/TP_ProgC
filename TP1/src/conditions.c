#include <stdio.h>


int main()
{
    int i=1;
    int somme = 0;
    for (i=1; i<=1000; i++)
    {
        int test1 = i%5;
        int test2 = i%7;
        if (test1==0 || test2==0)
        {
            somme++;
            printf("%d\n", somme);
        }

    }
    printf("somme final=%d", somme);
    return 0;
}