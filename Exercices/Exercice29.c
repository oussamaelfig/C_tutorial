//  (20 pts) En langage ’C’ les chaˆınes de caract`eres sont repr´esent´ees par un tableau de caract`eres
// ayant le caract`ere ’0’ `a la fin. Une autre fa¸con de repr´esenter une chaˆıne de caract`eres est d’utiliser
// un enregistrement qui contient un tableau de caract`eres et un entier indiquant la longueur de la
// chaˆıne.


// (a) (5 pts) Ecrivez le code permettant de d´ ´ eclarer (d´efinir) le nouveau type de donn´ees Chaine
// d´ecrit ci-dessus.

struct Chaine
{
    char tab[];
    int length;
};

// Ecrivez une proc´ ´ edure qui re¸coit en entr´ee une chaˆıne de type ’C’ et qui retourne
// l’´el´ement de type Chaine correspondant.

Chaine* procedure(Chaine *  )