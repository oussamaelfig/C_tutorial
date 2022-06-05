// 4.1 Écrivez une fonction qui initialise un tableau avec
// une valeur.
// Cette fonction reçoit en entrées le pointeur sur le
// tableau, sa taille et la valeur à placer dans chaque case.
// void initialiseTableau( int * tableau, int taille, int valeur )

#include <stdio.h>

void initialiseTableau( int * tableau, int taille, int valeur ){
    for (int i = 0; i < taille; i++)
    {
        tableau[i]=valeur;
    }
}

int main(int argc, char const *argv[])
{
    int TAILLE = 20;
    int tab[TAILLE];
    int valeur =0;

    initialiseTableau(tab, TAILLE, valeur);

    for (int i = 0; i < TAILLE; i++)
    {
        printf("%d\n", tab[i]);
    }
    
    return 0;
}
