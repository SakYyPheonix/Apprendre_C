
#include <stdio.h>
#include <stdlib.h>

int main() {
    int code;
    int i;
    
    for(i=0; i<=2; i++)
    {
        printf("code : ");
        scanf("%d", &code);
        if(code == 324)
        {
            printf("code OK");
            return 0;
        }
        else
        {
            if(i != 2)
            {
                printf("code incorrect\n");
            }
            else
            {
                printf("trop d'erreur\n");
            }
        }
    }

    return 0;
}

