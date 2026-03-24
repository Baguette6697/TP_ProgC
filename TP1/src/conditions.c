#include <stdio.h>


int main()
{
    int i; //on initialize i (notre compteur)
    int somme = 0; // on initialize notre somme
    for (i=1; i<=1000; i++) // lancement de la boucle for
    {
        int test1 = i%5;
        int test2 = i%7;
        int test3 = i%11; // on listes les 3 tests que l'on veux faire et on les sauvegarde dans des variables pour plus tard.
        //c'est pas obligatoire de les mettre dans une variable mais j'avais envie.
        if (test3 == 0)
        {
            continue;
        }
        if (test1 == 0 || test2 == 0) {
            somme += i;
            printf("%d\n", somme);
        }
        if (somme>5000)
        {
            break; // cassage de la boucle
        }

    }
    printf("somme final=%d", somme); // affichage de la somme final apres cassage de la boucle
    return 0;
}