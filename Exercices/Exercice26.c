// Qu'affiche le programme suivant ?

#include <stdio.h>

main()
{
    char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi",
                     "Samedi", "Dimanche"};
    char a[10][3], **p;
    int i;

    for (p = jours, i = 0; **p != 'D'; p++, i++)
    {
        a[i][0] = **p;
        a[i][1] = *(*p + 1);
        a[i][2] = '\0';

        printf("%s\n", a[i]);
    }
}
