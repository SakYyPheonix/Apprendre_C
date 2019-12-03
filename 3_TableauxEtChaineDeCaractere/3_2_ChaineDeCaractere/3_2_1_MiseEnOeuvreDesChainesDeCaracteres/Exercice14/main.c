/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 7 novembre 2019, 11:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char phraseIni[TAILLEMAX];
    char phraseFin[TAILLEMAX];
    int longueur;
    int longueurFin;
    int i;
    int compteurCaraEnleve;
    int compteur;
    
    compteurCaraEnleve = 0;
    printf("Donnez une phrase : ");
    gets(phraseIni);
    longueur = strlen(phraseIni);
    
    for(i=0; i<longueur+1; i++)
    {
        if((phraseIni[i]>=97 && phraseIni[i]<=122)||phraseIni[i]==0)
        {
            phraseFin[i-compteurCaraEnleve]=phraseIni[i];
        }
        else
        {
            if(phraseIni[i]>=65 && phraseIni[i]<=90)
            {
                phraseFin[i-compteurCaraEnleve]=(phraseIni[i]+32);
            }
            else
            {
                compteurCaraEnleve++;
            }
        }
    }
    
    longueurFin = strlen(phraseFin);
    
    for(i=0; i<longueurFin; i++)
    {
        if(phraseFin[i]==phraseFin[longueurFin-i-1])
        {
            compteur++;
        }
    }
    
    if(longueurFin==compteur)
    {
        printf("Il s'agit d'un palindrome");
    }
    else
    {
        printf("Il ne s'agit pas d'un palindrome");
    }
    
    return (0);
}


