#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tp2.h"

int main ()
{
    char *chaineMIN;
    char *chaineMAX;

    printf("saisir une chaîne de caractère en minuscule :\n");
    scanf("%s", chaineMIN);
    printf("chaine saisie : %s\n", chaineMIN);
    chaineMAX = upper(chaineMIN);
    printf("chaine en majuscule : %s\n", chaineMAX);

    return 0;
}