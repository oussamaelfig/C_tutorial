// Numéro 6. (25 pts) Un système d’exploitation doit gérer plusieurs fenêtres. Une des routines du
// système permet de déterminer sur quelle fenêtre se trouve le curseur contrôlé par la souris. Soit les
// déclarations suivantes :
// typedef struct {
// int x;
// int y;
// } Position;
// typedef struct {
// int identificateur;
// Position coin_superieur_gauche;
// Position coin_inferieur_droit;
// int priorite;
// } *Descripteur_Fenetre;
// Booleen estDansRectangle( Position p, Position coin_sup_gauche, Position coin_inf_droit );
// /* Cette fonction retourne VRAI (1) si le point p est à l’intérieur du rectangle
// dénoté par les points coin_sup_gauche et coin_inf_droit.
// Autrement, elle retourne FAUX (0) . */

// Notre système maintient un tableau de Descripteur_Fenetre. Ce tableau est d’une taille fixe de 200
// éléments :
// #define NB_FENETRES 200
// Descripteur_Fenetre lesFenetres[NB_FENETRES];
// Si une case du tableau n’est pas utilisée alors elle contient la valeur NULL, sinon elle contient un
// descripteur de fenêtre valide.
// Vous devez écrire une routine qui retourne le champ identificateur du descripteur de fenêtre qui
// représentre la fenêtre où se trouve le curseur de la souris. Le curseur est à l’intérieur d’une fenêtre
// si les valeurs x et y de sa Position sont comprises inclusivement (donc possiblement égales) dans le
// rectangle décrit par les Positions indiquées dans le descripteur de fenêtre. Si le curseur est à l’intérieur
// de plusieurs fenêtres, alors se sera la fenêtre qui a la plus grande priorite qui sera retournée comme
// résultat de la fonction.
// int trouverFenetre( Descripteur_Fenetre *lesFenetres, Position curseur_souris ) {

typedef struct
{
    int x;
    int y;
} Position;
typedef struct
{
    int identificateur;
    Position coin_superieur_gauche;
    Position coin_inferieur_droit;
    int priorite;
} * Descripteur_Fenetre;
Booleen estDansRectangle(Position p, Position coin_sup_gauche, Position coin_inf_droit);
/* Cette fonction retourne VRAI (1) si le point p est à l’intérieur du rectangle
dénoté par les points coin_sup_gauche et coin_inf_droit.
Autrement, elle retourne FAUX (0) . */

#define NB_FENETRES 200
Descripteur_Fenetre lesFenetres[NB_FENETRES];

int trouverFenetre( Descripteur_Fenetre *lesFenetres, Position curseur_souris ) {
    int resultat=-1;
    int priorite_courrante = 0;

    for (int i = 0; i < NB_FENETRES; i++)
    {
        if(estDansRectangle(curseur_souris,
         lesFenetres[i]->coin_superieur_gauche,
          lesFenetres[i]->coin_inferieur_droit) 
          && lesFenetres[i]->priorite > priorite_courrante){
              priorite_courrante = lesFenetres[i]->priorite;
              resultat = lesFenetres[i]->identificateur;
        }
    }

    return resultat;
    

}