#include <stdio.h>

int main() {


    int m[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int *t[3] = {m[2], m[0], m[1]};
    int **p = (int **) t;
    printf("%d\n", *(t[1] + 2));
    printf("%d\n", *(*p + 1));

    printf("%d\n", *(*(p + 2) + 2));

    printf("%d\n", **p);


    return 0;

}
