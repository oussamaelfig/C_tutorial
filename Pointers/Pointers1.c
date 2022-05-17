/*******************************************************************************
* 
* Description: Pointers in C
*
* Author: Oussama el-figha
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Pointeur : variable contenant l'adresse d'une autre variable
%d -> affiche une adresse de variable pointeur


[VARIABLES]
    mavariable : valeur de la variable
    &mavariable : adresse de la variable

[POINTEURS] 
    *monPointeur = NULL ou *monPointeur = &mavariable
    (declaration et initialisation d'un pointeur)

    monPointeur : adresse de la variable pointée
    *monPointeur: valeur de la variable pointée
    &monPointeur: adresse du pointeur
*/

int main(int argc, char const *argv[])
{
    //If you have a variable var in your program,
    // &var will give you its address in the memory.

    int var =6;
    printf("the adress of var is : %d\n", &var );


    //Here, the value entered by the user is stored 
    //in the address of var variable
    scanf("%d", &var);

//Another example
    int boo = 5;
    printf("var: %d\n", boo);

    // Notice the use of & before var
    printf("address of var: %p", &boo);  

    return 0;
}