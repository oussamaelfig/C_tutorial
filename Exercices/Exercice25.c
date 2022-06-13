// Qu'affiche le programme suivant ?

#include <stdio.h>

int f(int n);
int n = 5, p = 3;

main()
{
    int p = 0, q = 1;

    if (n++ == 5)
    {
        int p = 1;
        printf("%d %d %d\n", n, --p, q);
        n = f(p);
    }

    printf("%d %d %d\n", n, p, q);
    {
        int n = 1;
        printf("%d %d %d\n", n, p, q);
    }
}

int f(int n)
{
    int q = 0;
    n += q + p;
    printf("%d %d %d\n", n, p, q);
    return (p);
}
