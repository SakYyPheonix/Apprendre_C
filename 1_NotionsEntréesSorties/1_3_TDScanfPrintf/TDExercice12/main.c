
#include <stdio.h>
#include <stdlib.h>

int main() {

    int valDec;
    int valVir;
    
    printf("valeur en Decimal ?");
    scanf("%d.%d", &valDec, &valVir);
    printf("valeur en Hexadecimal : %X.%X", valDec);
}

