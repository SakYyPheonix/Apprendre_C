#include <stdio.h>
#include <stdlib.h>

int main() {
    int val1;
    int val2;
    int val3;
    
    printf("donner deux valeur");
    scanf("%d %d %d", &val1, &val2, &val3);
    
    if(val1<val2 && val3<val2)
    {
        printf("%d", val2);
    }
    else
    {
        if(val2<val1 && val3<val1)
        {
            printf("%d", val1);
        }
        else
        {
            printf("%d", val3);
        }
    }
    
}
