
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vala;
    int valb;
    int valc;
    int valDelta;
    
    printf("ax²+bx+c\n donner a b et c dans l'ordre");
    scanf("%d %d %d", &vala, &valb, &valc);
    valDelta = (valb*valb)-4*vala*valc;
    if(valDelta>=0 )
    {
        printf("Il y a des solutions dans l'ensemble des reels");
    }
    return 0;
}

