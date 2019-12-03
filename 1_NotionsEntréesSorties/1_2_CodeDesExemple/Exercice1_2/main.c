#include <stdio.h>
#include <stdlib.h>

int main() {
    float tempDeg;
    float tempFar;
    
    printf("temperature en degrés Fahrenheit : ");
    scanf("%f", &tempFar);
    tempDeg = ((tempFar - 32) * 5) / 9 ;
    printf("La temperature est de %f °C", tempDeg);
}
