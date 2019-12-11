
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 11 décembre 2019, 09:10
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *val1;
    float *val2;
    val1 = (float *)malloc(sizeof(float));
    val2 = (float *)malloc(sizeof(float));
    printf("val1 : ");
    scanf("%f", val1);
    printf("val2 : ");
    scanf("%f", val2);
    swapFloat(val1, val2);
    printf("val1 : %f\n", *val1);
    printf("val2 : %f\n", *val2);
    return (0);
}

