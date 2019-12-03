
#include <stdio.h>
#include <stdlib.h>

int main() {
    int longueur;
    int i;
    int u;

    printf("longueur du coté ? ");
    scanf("%d", &longueur);
    for (u = longueur; u > 0 ; u--) 
    {
        for (i = longueur; i > 0; i--) 
        {
            printf("#");
        }
        printf(" \n");
        longueur--;
        
    }
            return 0;
        }

