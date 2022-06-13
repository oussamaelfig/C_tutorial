#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *article[100];
char *nom[100];
char *verbe[100];
char *preposition[100];

char *genererPhrase(char *descripteur)
{
    int length = strlen(descripteur);
    char phrase = malloc((length * 20 + 2) * sizeof(char));

    for (int i = 0; i < length; i++)
    {
        if (descripteur[i] == 'a')
        {
            strcat(phrase, article[aleatoire(100)]);
        }
        else if (descripteur[i] == 'n')
        {
            strcat(phrase, nom[aleatoire(100)]);
        }
        else if (descripteur[i] == 'v')
        {
            strcat(phrase, verbe[aleatoire(100)]);
        }
        else if (descripteur[i] == 'p')
        {
            strcat(phrase, preposition[aleatoire(100)]);
        }
    }
    phrase[0] &= 0x00DF;
    phrase[strlen(phrase)] = '.';
    phrase[strlen(phrase)] = '\0';

    return phrase;
}

int aleatoire(int max);
int main(int argc, char const *argv[])
{
    char lettre = 'n';
    printf("%c", lettre);
    lettre &= 0x00DF;
    printf("%c", lettre);

    char *resultat;

    resultat = genererPhrase(argv[1]);

    printf("%s", resultat);

    free(resultat);
    resultat = NULL;

    return 0;
}
