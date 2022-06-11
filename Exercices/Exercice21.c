// Un coefficient bonominial est calculé de la façon suivante:
// C(n,k)=C(n-1, k-1) + C(n-1,k)
// C(n,0)=1
// C(n,n)=1

// Ecrivez le Code C qui realise cette fonction recursive
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int coeffBinom(int n, int k)
{
    int resultat;

    if (k == 0 || k == n)
    {
        resultat = 1;
    }
    else
    {
        resultat = coeffBinom(n - 1, k - 1) + coeffBinom(n - 1, k);
    }
}

int main(int argc, char const *argv[])
{
    int a = coeffBinom(100, 5);
    printf("coefficient binomial est : %d\n", a);
    printf("alllooooooooooooooooooooooo");

    return 0;
}
