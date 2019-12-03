
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 5 novembre 2019, 13:24
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int note[31];
    int i;
    
    for(i=0; i<=31; i++)
    {
        printf("donner la note de l'élève %d : ", i+1);
        scanf("%d", &note[i]);
    }
    
    for(i=0; i<31; i++)
    {
        printf("L'élève numéro %d a eu la note %d/20\n", i+1, note[i]);
    }

    return (0);
}

