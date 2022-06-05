// 4.3 Soit la structure suivante :
// struct _etudiant {
// char * nom;
// char * prenom;
// char * code;
// };
// typedef struct _etudiant Etudiant;
// Écriver une fonction qui va servir de constructeur pour cette structure.
// Etudiant * creerEtudiant( char * nom, char * prenom, char * code )
// N'oublier pas d'allouer et copier les chaîne de caractères.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> // necessaire pour l'utilisation des fonctions
                    // strlen() et strcpy()

struct _etudiant
{
    char *nom;
    char *prenom;
    char *code;
};

typedef struct _etudiant Etudiant;

Etudiant * creerEtudiant( char * nom, char * prenom, char * code ){
    Etudiant * etu = (Etudiant*) malloc(sizeof(Etudiant));
    etu->nom=malloc((strlen(nom)+1)*sizeof(char));
    etu->prenom=malloc((strlen(prenom)+1)*sizeof(char));
    etu->code=malloc((strlen(code)+1)*sizeof(char));

    strcpy(etu->nom,nom);
    strcpy(etu->prenom,prenom);
    strcpy(etu->code,code);


    return etu;
}

int main(int argc, char const *argv[])
{
    char nom[]="ELFIGHA";
    char prenom[]="OUSSAMA";
    char code[]="ELFO123566";

    Etudiant* etu=creerEtudiant(nom,prenom,code);

    printf("le nom de l'etudiant: %s\n", etu->nom );
    printf("le prenom de l'etudiant: %s\n", etu->prenom );
    printf("le code de l'etudiant: %s\n", etu->code );

    
    
    return 0;
}
