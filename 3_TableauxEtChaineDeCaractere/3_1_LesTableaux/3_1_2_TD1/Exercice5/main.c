
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 novembre 2019, 09:06
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLE 5

int main() {
    int tabATrier[TAILLE];
    int u;
    int i;
    int valMin;
    int uMin;
    
    
    tabATrier[0]=5;
    tabATrier[1]=7;
    tabATrier[2]=2;
    tabATrier[3]=1;
    tabATrier[4]=4;
    
    for(i=0; i<TAILLE;i++)
    {
        for(u=0;u<TAILLE;u++)
        {
            if((valMin>tabATrier[u]||u==i)&& u>=i)
            {
                valMin = tabATrier[u];
                uMin = u;
            }
        }
        tabATrier[uMin] = tabATrier[i];
        tabATrier[i] = valMin;
        
    }
    
    for(i=0; i<TAILLE;i++)
    {
        printf("Valeur tableau n°%d = %d\n", i+1, tabATrier[i]);
    }
    
    return (0);
}

