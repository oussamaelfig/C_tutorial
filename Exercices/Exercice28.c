void echange(int *x1, int *x2)
{
    int t = *x1;
    *x1 = *x2;
    *x2 = t;
}

void tri(int tab[], int taille)
{
    int j;
    while (j < taille - 1)
    {
        int min = tab[j];
        int i, position = j;
        for (i = j + 1; i++; i < taille)
        {
            if (min > tab[i])
            {
                min = tab[i];
                position = i;
            }
        }
        // placer le code pour echanger
        // tab[j] avec tab[position] ici:
        // **********************************
        echange(tab+j,tab+position);
        // **********************************
        j++;
    }
}
