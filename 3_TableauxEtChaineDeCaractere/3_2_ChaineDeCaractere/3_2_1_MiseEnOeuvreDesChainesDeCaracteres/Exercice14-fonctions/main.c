
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 7 novembre 2019, 11:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblio.h"
#define TAILLEMAX 255

int main() {
    char phraseIni[TAILLEMAX];
    char phraseFin[TAILLEMAX];
    int validationPal;
    
    printf("Donnez une phrase : ");
    gets(phraseIni);
    
    phraseFin = supprimeCaractere(phraseIni);
    
    validationPal = detectePalindrome(phraseFin);
    
    if(validationPal == 1)
    {
        printf("Il s'agit d'un palindrome");
    }
    else
    {
        printf("Il ne s'agit pas d'un palindrome");
    }
    
    return (0);
}


