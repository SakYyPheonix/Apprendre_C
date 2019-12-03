
#include <stdio.h>
#include <stdlib.h>

int main() {
    float note;
    
    printf("donner note : ");
    scanf("%f", &note);
    
    if(note < 10)
    {
        printf("vous avez moins que la moyenne");
    }
    else
    {
        if(note == 10)
        {
            printf("vous avez la moyenne");
        }
        else
        {
            printf("vous avez plus que la moyenne");
        }
    }
    
    return 0;
}

