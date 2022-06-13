#include <stdio.h>

int p = 2;
int f(int q)
{
    return p = q++;
}

int main(int argc, char const *argv[])
{
    int r[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int p = 5;
    int q = 7;
    int i = 0;

    r[i++] = p + q;
    {
        int p = --q;
        r[i++] = p + q;
    }

    q += i++;
    r[++i] = p;

    r[i++] = f(q);
    r[i++] = f(q);

    for (; i  >= 0; i--)
    {
        printf("%i,", *(r + i));
        if (i == 0)
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }
    }

    return 0;
}
