
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 7 novembre 2019, 11:12
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 30

int main() {
    char phraseIni[TAILLEMAX];
    char phraseFin[TAILLEMAX];
    int longueur;
    int i;
    int compteurCaraEnleve;
    
    compteurCaraEnleve = 0;
    printf("Donnez une phrase : ");
    gets(phraseIni);
    longueur = strlen(phraseIni);
    
    for(i=0; i<longueur; i++)
    {
        if((phraseIni[i]>=65 && phraseIni[i]<=90)||(phraseIni[i]>=97 && phraseIni[i]<=122))
        {
            phraseFin[i-compteurCaraEnleve]=phraseIni[i];
        }
        else
        {
            compteurCaraEnleve++;
        }
    }
    printf("%s", phraseFin);
    return (0);
}

