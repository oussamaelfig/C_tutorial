#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct _forme2D
{
    float centre_x;
    float centre_y;
};

struct _forme3D
{
    struct _forme2D base;
    float centre_z;
};

struct _forme
{
    int nombreDimension;
    char *nom;
    union
    {
        struct _forme2D forme2;
        struct _forme3D forme3;
    } description;
};

typedef struct _forme Forme;

Forme *creerForme3D(float centre_x, float centre_y, float centre_z, char *nom)
{
    Forme *resultat = (Forme *)malloc(sizeof(Forme));

    resultat->nombreDimension = 3;
    resultat->nom = malloc((strlen(nom)+1) * sizeof(char));
    resultat->description.forme3.centre_z = centre_z;
    resultat->description.forme3.base.centre_x = centre_x;
    resultat->description.forme3.base.centre_y = centre_y;

    strcpy(resultat->nom,nom);
    
}

int main(int argc, char const *argv[])
{
    int a = sizeof(struct _forme2D);
    int b = sizeof(struct _forme3D);
    int c = sizeof(struct _forme);

    printf("les 3 formes sont : %d, %d, %d\n", a, b, c);

    return 0;
}
