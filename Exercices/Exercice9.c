// 3.2 Construisez une fonction qui reçoit un tableau de int
// et sa taille en argument et va trouver le minimum et la moyenne des
// éléments d’un tableau.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void minimumMean(double *arr, const int taille)
{
    double sum = 0;
    double min = arr[0];
    for (int i = 0; i < taille; i++)
    {
        sum += arr[i];
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

        printf("La moyenne est : %.2f\n", (double)(sum/taille));
        printf("Le minimum de la liste est : %.2f\n", min);
}

int main(int argc, char const *argv[])
{
    const int TAILLE = 5;
    double tab1[] = {1.5, 5.6, -8.45, 1.9, 7.1};
    minimumMean(tab1, TAILLE);
    return 0;
}
