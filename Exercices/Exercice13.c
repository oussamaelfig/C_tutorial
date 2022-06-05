// 4.2 Écrivez une fonction qui alloue un tableau et l'initialise avec
// une valeur de départ. Faites appel à la fonction du numéro 4.1
// pour l'initialisation.
// int * construireTableau( int taille, int valeurInitiale )
// Attention, quand on alloue de la mémoire il faut s’assurer de
// la liberer quand on n’en a plus besoin.
// free(tableau)
// C’est aussi une bonne pratique de remettre les pointeurs a NULL.
// tableau=NULL

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <crtdbg.h>


//inculde crtdbg.h to my prog for detect memory leak
//this package will transform malloc and free into functions

void initialiseTableau( int * tableau, int taille, int valeur ){
    for (int i = 0; i < taille; i++)
    {
        tableau[i]=valeur;
    }
}

int * construireTableau( int taille, int valeurInitiale ){
    int * tab = (int *) malloc(sizeof(int));
    
    initialiseTableau(tab, taille, valeurInitiale);
    
    return tab;
}


int main(int argc, char const *argv[])
{
    int * f= malloc(5* sizeof(int));
    int * table=construireTableau(5, 2);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", table[i]);
    }
    
    //free(table);

    _CrtDumpMemoryLeaks();
    return 0;
}
