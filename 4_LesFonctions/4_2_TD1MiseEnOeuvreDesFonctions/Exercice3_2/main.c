
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 novembre 2019, 14:13
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblio.h"

int main() {
    float res, val1, val2;
    
    printf("val1 : ");
    scanf("%f", &val1);
    printf("val2 : ");
    scanf("%f", &val2);
    res=additionReels(val1, val2);
    printf("resultat : %.2f",res);
    printf("resultat : %.2f",additionReels(val1, val2));
    res=additionReels(val1, 3.14);
    res=additionReels(1.896, 3.14);
    res=additionReels(3.14, val2);
    

    return (0);
}
