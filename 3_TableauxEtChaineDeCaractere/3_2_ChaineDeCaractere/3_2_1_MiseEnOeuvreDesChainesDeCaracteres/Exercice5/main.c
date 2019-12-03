/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 novembre 2019, 10:48
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 30

int main() {
    char chaine[TAILLEMAX];
    int i;
    int compteurVoy;
    int compteurCon;
    
    gets(chaine);
    compteurVoy=0;
    
    for(i=0; i<TAILLEMAX; i++)
    {
        if(chaine[i]=='a')
        {
            compteurVoy++;
        }
        else
        {
            if(chaine[i]=='e')
            {
                compteurVoy++;
            }
            else
            {
                if(chaine[i]=='i')
                {
                    compteurVoy++;
                }
                else
                {   
                    if(chaine[i]=='o')
                    {
                        compteurVoy++;
                    }
                    else
                    {
                        if(chaine[i]=='u')
                        {
                            compteurVoy++;
                        }
                        else
                        {
                            if(chaine[i]=='y')
                            {
                                compteurVoy++;
                            }
                        }
                    }
                }
            }
        }
    }
    compteurCon=strlen(chaine)-compteurVoy;
    printf("%d", compteurCon);
    

    return (0);
}

