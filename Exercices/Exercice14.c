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
// 4.4 Construire une fonction qui affiche le contenu d’une structure
// Etudiant.
// void afficherEtudiant( Etudiant * p )
// 4.5 Construisez un destructeur pour la structure de la section 4.3.
// Ce destructeur doit faire appel a 'free' et doit placer le pointeur a
// NULL. Pour cela, nous devons utiliser un double pointeur.
// void detruireEtudiant( Etudiant * * p )
// Note: Si on n’utilise pas un double pointeur, il ne sera pas possible
// d’assigner une valeur NULL au pointeur de structure dans la fonction

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

void afficherEtudiant( Etudiant * p ){
    printf("le nom de l'etudiant: %s\n", p->nom );
    printf("le prenom de l'etudiant: %s\n", p->prenom );
    printf("le code de l'etudiant: %s\n", p->code );
}

void detruireEtudiant( Etudiant * * p ){
    free((*p)->nom);
    free((*p)->prenom);
    free((*p)->code);
    free(*p);

    *p=NULL;
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
    
    printf("***************************************************\n\n");

    afficherEtudiant(etu);

    detruireEtudiant(&etu);


    return 0;
}
