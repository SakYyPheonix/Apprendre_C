
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 novembre 2019, 10:28
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 30

int main() {
    char chaine[TAILLEMAX];
    int i;
    int compteur;
    int longueur;
    
    gets(chaine);
    compteur=0;
    longueur = strlen(chaine);
    
    
    for(i=0; i<longueur; i++)
    {
        if(chaine[i]=='a')
        {
            compteur++;
        }
    }
    printf("%d", compteur);
    

    return (0);
}

