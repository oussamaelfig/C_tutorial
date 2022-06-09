/* Version simplifiee du code d'implementation d'une Pile avec une liste
 * simplement chainee
 * L'approche de verification intensive utilisee dans le programme original
 * n'est pas utilisee
 * Author: Jocelyn Bedard
 * Version: E22
 */


#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "Pile.h"


/*
 * Code pour la structure privÃ© Chainon
 */

typedef struct _chainon * Chainon;

// Chainon est un pointeur de struct _chainon


struct _chainon {
    void *element; // pointeur void generique
    Chainon suivant; // pointeur vaire chainon suivant
};


// Fonctions utilitaires (cachees a l'utilisateur)

Chainon creerChainon( void * a_element, Chainon a_suivant) {
    Chainon resultat = NULL;
    
    resultat = ( Chainon )malloc( sizeof( struct _chainon ) );
    
    resultat->element = a_element;
    resultat->suivant = a_suivant;
    
    return resultat;
}


void detruireChainon( Chainon * a_chainon ) {
    free( * a_chainon );
    * a_chainon = NULL;
}


/*
 * Code pour la structure publique Pile.
 *
 * Fonctions d'implementation
 */


struct _pile {
    Chainon sommet; // un pointeur de struc _chainon
};


Pile creerPile( ) {
    Pile resultat = NULL; // pointeur vers struct _pile (voir Pile.h)
    
    
    resultat = ( Pile )malloc( sizeof( struct _pile ) );
    resultat->sommet = NULL;
    
    return resultat; // la Pile vide
}


void detruirePile( Pile * a_pile ) {
    free( * a_pile );
    *a_pile = NULL;
}



void empiler( Pile a_pile, void * a_element) {
    
    Chainon nouveau = creerChainon( a_element, a_pile->sommet);
    
    a_pile->sommet = nouveau;
    
}


void depiler( Pile a_pile) {
    if( NULL == a_pile->sommet ) {
        fprintf(stderr, "La pile est vide");
        exit(-1);
    } else {
        Chainon ancien = a_pile->sommet;
        a_pile->sommet = ancien->suivant;

        // ajoute un free JB
        free(ancien->element);
        detruireChainon( & ancien );
    }  
}


void * sommet( Pile a_pile) {
    void * resultat = NULL;

    if( NULL == a_pile->sommet ) {
        fprintf(stderr, "La pile est vide");
        exit(-1);
    } else {
        resultat = a_pile->sommet->element;
    }

    return resultat;
}


int estVide( Pile a_pile ) {
    return NULL == a_pile->sommet;  
}
