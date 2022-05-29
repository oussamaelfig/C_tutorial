// 3.1 Construisez une fonction qui reçoit un tableau de int et
// sa taille en argument et va remplir le tableau avec des multiples de 5.
// Et une fonction qui affiche les éléments du tableau.
// a) De façon croissante (incrémentation de 5)
// b) Entrez des multiples de 5 aléatoires avec la fontion rand()

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void remplireTab(int *tab, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        tab[i] = (i + 1) * 5;
    }
}

void remplireTabRand(int *tab, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        int a=rand();
        if (a % 5 == 0)
        {
            tab[i] = a;
        }
    }
}

void afficherTab(int *tab, int taille)
{
    printf("[");

    for (int i = 0; i < taille; i++)
    {
        printf("%d\t", tab[i]);
    }
    printf("]");
}

int main(int argc, char const *argv[])
{
    const int TAILLE = 10;
    int tableau[TAILLE];

    remplireTab(tableau, TAILLE);
    afficherTab(tableau, TAILLE);
    printf("\n");
    remplireTabRand(tableau, TAILLE);
    afficherTab(tableau, TAILLE);
    return 0;
}
