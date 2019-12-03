/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 novembre 2019, 11:01
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 255

int main() {
    char chaine[TAILLEMAX];
    int i;
    int compteur;
    int longueur;
    
    gets(chaine);
    compteur=0;
    longueur=strlen(chaine);
    
    for(i=0; i<longueur; i++)
    {
        if((chaine[i]>'Z' || chaine[i]<'A')&&(chaine[i]>'z' || chaine[i]<'a')&&(chaine[i-1]<='Z' || chaine[i-1]>='A')&&(chaine[i-1]<='z' || chaine[i-1]>='a'))
        {
            compteur++;
        }
    }
    printf("%d", compteur+1);
    

    return (0);
}

