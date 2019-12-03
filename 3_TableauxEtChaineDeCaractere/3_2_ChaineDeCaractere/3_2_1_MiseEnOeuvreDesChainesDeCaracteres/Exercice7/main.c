/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 novembre 2019, 11:03
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 30

int main() {
    char chaine[TAILLEMAX];
    int i;
    int nomCara;
    
    gets(chaine);
    nomCara = strlen(chaine);
    
    for(i=0; i<nomCara; i++)
    {
        
        if(chaine[i]<=90 && chaine[i]>=65)
        {
            chaine[i] = chaine[i] + 32;
        }
        else
        {
            if(chaine[i]<=122 && chaine[i]>=97)
            {
                chaine[i] = chaine[i] - 32;
            }
        }
    }
    
    printf("%s", chaine);

    return (0);
}

