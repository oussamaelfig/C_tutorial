/*
4.7 Soit la structure suivante :
Note: un pointeur int* age fut ajouter dans la structure
struct _etudiant {
    char * nom;
    char * prenom;
    char * code;
    int* age;
};
typedef struct _etudiant Etudiant;
Écriver une fonction qui va servir de constructeur pour cette structure.
Etudiant * creerEtudiant( char * nom, char * prenom, char * code, int*
age )
N’oublier pas d’allouer et copier les chaîne de caractères.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> // necessaire pour l'utilisation des fonctions
// strlen() et strcpy()

struct _etudiant {
    char *nom;
    char *prenom;
    char *code;
    int *age;
};
typedef struct _etudiant Etudiant;

Etudiant *creerEtudiant(char *nom, char *prenom, char *code, const int *age) {
    Etudiant *etud = (Etudiant *) malloc(sizeof(struct _etudiant));

    etud->nom = malloc((strlen(nom) + 1) * sizeof(char));
    etud->prenom = malloc((strlen(prenom) + 1) * sizeof(char));
    etud->code = malloc((strlen(code) + 1) * sizeof(char));
    etud->age = malloc(sizeof(int));

    strcpy(etud->nom, nom);
    strcpy(etud->prenom, prenom);
    strcpy(etud->code, code);
    *(*etud).age=*age;
    return etud;
}

void detruireEtudString(Etudiant **etud) {
    free((*etud)->code);
    free((*etud)->nom);
    free((*etud)->prenom);
    free((*etud)->age);
    free(*etud);
    (*etud) = NULL;
}


int main(int argc, char const *argv[]) {


}