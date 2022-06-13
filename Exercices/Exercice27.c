// Écrire le code d'une fonction puissance dont la signature est 
// int puissance(int x, unsigned n)
// et qui calcule de façon récursive la puissance d'un nombre entier en appliquant les règles ci-dessous :

// x0 = 1,
// x1 = x,
// xk = xk-1 * x  pour k impair > 1,
// xk = xk/2*xk/2 pour k pair > 1.


int puissance(int x, unsigned n){
    int resultat=0;
    if(n==0){
        resultat=1;
    }else if(n==1){
        resultat=x;
    }else{
        if(n%2!=0 && n>1){
            resultat=puissance(x,n-1)*x;
        }else if(n%2==0 && n>1){
            resultat=puissance(x,n/2)*puissance(x,n/2);
        }
    }

    return resultat;
}

int main(int argc, char const *argv[])
{
    printf("%d",puissance(2,4));
    return 0;
}
