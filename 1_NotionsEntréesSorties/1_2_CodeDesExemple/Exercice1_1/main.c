#include <stdio.h>
#include <stdlib.h>

int main() {
    float tempDeg;
    float tempFar;
    
    printf("temperature en degrés Celsius : ");
    scanf("%f", &tempDeg );
    tempFar = ((tempDeg * 9) / 5) + 32 ;
    printf("La temperature est de %f °F", tempFar);
}

