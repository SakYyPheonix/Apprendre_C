
#include <stdio.h>
#include <stdlib.h>

int main() {
    int annee;
    float reste1;
    float reste2;
    
    printf("Donner une années : ");
    scanf("%d", &annee);
    reste1 = annee%4;
    if(reste1 == 0)
    {
        reste1=annee%100;
        reste2=annee%400;
        if (reste1 == 0 && reste2 != 0)
        {
            printf("il ne s'agit pas d'une année bissextile");
        }
        else 
        {
            printf("il s'agit d'une année bissextile");
        }
        
    }
    else
    {
        printf("il ne s'agit pas d'une année bissextile");
    }
    
    return 0;
}

