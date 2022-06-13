// On veut créer un type Date permettant de gérer des dates, et représenté par une structure. Un programmeur propose de concevoir un module Dates.c, dont l'en-tête Dates.h est la suivante :

typedef struct {
   char jour;
   char mois;
   int annee;
} Date;

typedef Date * date;

/* formate_date
  res est la chaîne de caractères qui représente la date d formatée
  selon format.  format est une chaîne de 4 caractères dont les 3
  premiers indiquent l'ordre des composantes de la date, en se servant
  de j pour désigner le jour (2 chiffres), m le mois (2 chiffres) et a
  l'année (4 chiffres). Le 4ème caractère indique le séparateur à
  utiliser.

  La fonction renvoie 0 si le format n'est pas conforme à la
  spécification ci-dessus, 1 sinon.

  Exemples pour une date d indiquant le 31 janvier 2005 :
    format = "jma-" => res = "31-01-2005" et formate_date = 1
    format = "amj-" => res = "2005-01-31" et formate_date = 1
    format = "mja/" => res = "01/31/2005" et formate_date = 1
    format = "aam+" => formate_date = 0
*/
int formate_date(Date d, char format[], char res[]);

/* diff_dates
  Calcule la différence (en nombre de jours) entre d2 et d1. Le
  résultat est donc positif si d2 est postérieure à d1 (i.e., si d2
  vient après d1).
*/
int diff_dates(Date d1, Date d2);

/* ajoute_jours
  Renvoie la date déterminée par l'ajout de n jours à la date d.
  n peut être positif, nul ou négatif.
*/
Date ajoute_jours(Date d, int n);  
 
