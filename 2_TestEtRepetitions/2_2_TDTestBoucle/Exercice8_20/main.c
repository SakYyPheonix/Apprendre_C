
#include <stdio.h>
#include <stdlib.h>

int main() {
    int coucou;
    int i;
    
    printf("Combien de fois entend-on le coucou dans la forêt lointaine ? ");
    scanf("%d", &coucou);
    printf("Dans la forêt lointaine, on entend le coucou.\n");
    for(i=0; i<coucou; i++)
    {
        printf("coucou !\n");
    }
    printf("fait le coucou.");
            
    return 0;
}

