/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 novembre 2019, 10:42
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 30

int main() {
    char chaine[TAILLEMAX];
    int i;
    int compteur;
    
    gets(chaine);
    compteur=0;
    
    for(i=0; i<TAILLEMAX; i++)
    {
        if(chaine[i]=='a')
        {
            compteur++;
        }
        else
        {
            if(chaine[i]=='e')
            {
                compteur++;
            }
            else
            {
                if(chaine[i]=='i')
                {
                    compteur++;
                }
                else
                {   
                    if(chaine[i]=='o')
                    {
                        compteur++;
                    }
                    else
                    {
                        if(chaine[i]=='u')
                        {
                            compteur++;
                        }
                        else
                        {
                            if(chaine[i]=='y')
                            {
                                compteur++;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", compteur);
    

    return (0);
}

