// Écrivez le code pour la procédure ayant l’en-tête suivant :
// void insererChaine( char *destination, const char *source, int position );
// Cette procédure insère la chaîne source dans la chaîne destination à partir du caractère à la case
// indiquée par position. Par exemple, soit les arguments suivants :
// destination : insererne
// source : Chai
// position : 7
// Après l’appel, destination contiendra : insererChaine
// Note : c’est la responsabilité de l’appelant (donc pas celle de la routine) de s’assurer i) que destination
// a assez de place et ii) que position dénote une position valide à l’intérieur de la chaîne destination.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void insererChaine( char *destination, const char *source, int position ){
 
    char *strA = destination, *strB = source, strC[50];
    int x = position;
    strncpy(strC, strA, x);
    strC[x] = '\0';
    strcat(strC, strB);
    strcat(strC, strA + x);
    printf("%s\n", strC);

}
int p;
int q = 100;
int r = 200;


int main(int argc, char const *argv[])
{
    int q= p = 6 ;
    p=12;
    r=5;


    printf("%i %i %i", p, q, r);
    return 0;
}
