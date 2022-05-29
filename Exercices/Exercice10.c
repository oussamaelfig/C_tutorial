// 3.4 Construisez un petit programme qui affiche le nombre
// d’arguments passez en parametre et les mots « un gros bleuet
// mure c’est bon » passez en argument
// - afficher un mot par ligne
// - afficher en trois lignes de votre choix
#include <stdio.h>


int main(int argc, char *argv[]){
    
    printf("Le nombre d'argument est %i\n", argc);
    for (int i=1; i<argc; i++){
        printf("%s\n", argv[i]);
    }
    
    return 0;
}