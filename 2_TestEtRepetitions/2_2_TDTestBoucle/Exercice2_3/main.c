
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int note;
    
    printf("donner la note : ");
    scanf("%d", &note);
    
    if( note <= 20 && note > 16)
    {
        printf("A");
    }
    else
    {
       if(note <= 16 && note > 12)
        {
            printf("B");
        }
        else
        {
           if(note <= 12 && note > 8)
            {
                printf("C");
            }
            else
            {
                if(note <= 8 && note > 4)
                {
                    printf("D");
                }
                else
                {
                    if(note <= 4 && note >= 0)
                    {
                        printf("E");
                    } 
                    else
                    {
                        printf("Nope");
                    }
                    
                } 
            }
        }        
    }
    
    return 0;
}

