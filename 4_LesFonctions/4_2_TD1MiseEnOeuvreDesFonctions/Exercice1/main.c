
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 novembre 2019, 13:46
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblio.h"

int main() 
{
    char genre;
    
    printf("vous êtes un homme ou une femme (h/f)? ");
    scanf("%c", &genre);
    
    afficherMenu(genre);
    
    afficherMenu('h');

    return (0);
}

