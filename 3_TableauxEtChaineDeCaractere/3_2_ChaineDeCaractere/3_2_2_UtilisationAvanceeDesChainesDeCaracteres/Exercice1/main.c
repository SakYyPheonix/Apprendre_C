
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 19 novembre 2019, 15:43
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 255

int main() {
    char verbe[MAX];
    int retour;

    printf("Donner un verbe du premier groupe : ");
    gets(verbe);
    
    retour = presenceEr(verbe);
    if(retour==1)
    {
        verbe[strlen(verbe)-2] = '\0';
        afficheTerminaison(verbe);
    }
    else
    {
        if(retour==0)
        {
            printf("%s n'est pas un verbe du premier groupe", verbe);
        }
    }
            
    return (0);
}

