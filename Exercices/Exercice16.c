//  Écrivez le code pour le constructeur creerEt déclaré plus haut. Les valeurs gauche et
// droite seront assignées à leurs champs respectifs. Les champs valeur et estEvalue seront initialisés
// à FAUX. N’oubliez pas d’allouer de l’espace mémoire pour la structure.


//  Écrivez le code pour le constructeur creerOu déclaré plus haut. Ce constructeur
// diffère de creerEt par ses arguments : la valeur de retour est placée dans une variable transmise par
// référence plutôt que d’être retournée comme résultat de la fonction.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> // necessaire pour l'utilisation des fonctions
// strlen() et strcpy()

typedef enum
{
    FAUX = 0,
    VRAI
} Booleen;
typedef enum
{
    EXPRESSION_ET,
    EXPRESSION_OU,
    EXPRESSION_NON,
    EXPRESSION_CONSTANTE
} TypeExpression;
typedef struct _expression *Expression;
struct _et
{
    Expression gauche;
    Expression droite;
};
struct _ou
{
    Expression gauche;
    Expression droite;
};
struct _non
{
    Expression droite;
};
struct _constante
{
    Booleen v;
};
struct _expression
{
    TypeExpression type;
    union
    {
        struct _et et;
        struct _ou ou;
        struct _non non;
        struct _constante constante;
    } expression;
    Booleen valeur;
    Booleen estEvalue;
};

Expression creerEt(Expression gauche, Expression droite);
void creerOu(Expression gauche, Expression droite, Expression *resultat);

Expression creerEt(Expression gauche, Expression droite)
{
    Expression resultat = (Expression)malloc(sizeof(struct _expression));

    resultat->type = EXPRESSION_ET;
    resultat->expression.et.droite = droite;
    resultat->expression.et.gauche = gauche;
    resultat->valeur = FAUX;
    resultat->estEvalue = FAUX;

    return resultat;
}

void creerOu(Expression gauche, Expression droite, Expression *resultat){
    *resultat = (Expression) malloc(sizeof(struct _expression));

    (*resultat)->type = EXPRESSION_OU;
    (*resultat)->expression.ou.droite = droite;
    (*resultat)->expression.ou.gauche = gauche;
    (*resultat)->valeur = FAUX;
    (*resultat)->estEvalue = FAUX;
}

// Écrivez le code qui appelle le constructeur creerOu et place le résultat dans la variable
// exp déclarée ci-dessous. Utilisez la valeur NULL pour les arguments gauche et droite de la routine.


int main(int argc, char const *argv[])
{
    Expression exp;
    creerOu(NULL,NULL,&exp);
    return 0;
}


