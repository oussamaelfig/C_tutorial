#include <stdio.h>

#define NB 5

int main(int argc, char const *argv[])
{
    int i = 0, j = 0;
    int tab[NB][NB] = {
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}};

    for (i = 0; i < NB; i++)
    {
        for (j = 0; j < NB; j++)
        {
            tab[i][j] = tab[i][j - 1] + tab[i - 1][j - 1];
        }
    }

    for (i = 0; i < NB; i++)
    {
        for (j = 0; j < NB; j++)
        {
            printf("%i", tab[i][j]);
            if (j < NB - 1)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }

    return 0;
}
