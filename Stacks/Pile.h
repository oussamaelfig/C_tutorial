#ifndef _PILE_H
#define _PILE_H


/**
 * Definition du type pile.
 */
typedef struct _pile * Pile;


/**
 * Constructeur : construit une pile vide.
 * @return (Pile) retourne une pile vide.
 */
Pile creerPile( );


/**
 * Destructeur : dÃ©truit une pile.
 * @param a_pile (Pile *) un pointeur sur une pile construite correctement.
 * @precondition a_pile != NULL && (*a_pile) != NULL
 */
void detruirePile( Pile * a_pile );


/**
 * Procedure qui permet d'empiler un element.
 * @param a_pile (Pile) une pile construite correctement.
 * @precondition a_pile != NULL.
 * @param a_element (void *) un pointeur sur l'element a empiler.
 * @postcondition l'element est empiler sur la pile.
 */
void empiler( Pile a_pile, void * a_element);


/**
 * Procedure qui depile le sommet d'une pile.
 * @param a_pile (Pile) une pile construite correctement.
 * @precondition a_pile != NULL.
 * @postcondition le sommet de la pile est enleve de la pile.
 *                cette element n'est pas desalloue.
 */
void depiler( Pile a_pile);


/**
 * Fonction qui retourne le sommet de la pile.
 * @param a_pile (Pile) une pile construite correctement.
 * @precondition a_pile != NULL.
 * @return le sommet de la pile.  L'element retourne reste sur
 *         le sommet, seul une copie du pointeur est retourne.
 */
void * sommet( Pile a_pile);


/**
 * Fonction qui retourne vrai si la pile est vide.
 * @param a_pile (Pile) une pile construite correctement.
 * @precondition a_pile != NULL.
 * @return vrai si la pile est vide, sinon faux (0) est retourne.
 */
int estVide( Pile a_pile );

#endif
