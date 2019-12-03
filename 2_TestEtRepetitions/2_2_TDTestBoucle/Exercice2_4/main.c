
#include <stdio.h>
#include <stdlib.h>

int main() {
    char lettre;
    
    printf("donner la Lettre : ");
    scanf("%c", &lettre);
    
    if(lettre == 'A')
    {
        printf(" Entre 20 et 16 points");
    }
    else
    {
        if(lettre == 'B')
        {
            printf(" Entre 16 et 12 points");
        }
        else 
        {
            if(lettre == 'C')
            {
                printf(" Entre 12 et 8 points");
            }
            else 
            {
                if(lettre == 'D')
                {
                    printf(" Entre 8 et 4 points");
                }
                else 
                {
                    if(lettre == 'E')
                    {
                        printf(" Entre 4 et 0 points");
                    }
                    else 
                    {
                     printf("ERROR");   
                    }                         
                }            
            }
        }
    }
    
    return 0;
}

