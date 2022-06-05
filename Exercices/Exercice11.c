// 3.5 Construisez un petit programme qui
// prend des nombres entiers comme
// arguments et qui calcule la moyenne de
// ceux-ci en utilisant une fonction
// - Utilisation de la fonction atoi()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    double sum=0;
    for (int i = 0; i < argc; i++)
    {
        printf("\narg %d : %s\n\n",i, argv[i]);
        sum+=atoi(argv[i+1]);
    }
    
    printf("la moyenne est : %.2f", (sum/(argc-1)));
    return 0;
}