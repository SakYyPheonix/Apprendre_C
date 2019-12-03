
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 5 novembre 2019, 14:41
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int min[30];
    int max[30];
    int jourMin;
    int jourMax;
    int valMin;
    int valMax;
    int i;
    
    valMin=100;
    valMax=0;
    for(i=0; i<30; i++)
    {
        //printf("donner temperature min du jour %d : ", i+1);
        //scanf("%d", &min[i]);
        //printf("donner temperature max du jour %d : ", i+1);
        //scanf("%d", &max[i]);
        
        max[i]=60-i;
        min[i]=30-i;
        if(min[i]<valMin)        
        {
            jourMin=i;
            valMin=min[i];
        }
        if(max[i]>valMax)
        {
            jourMax=i+1;
            valMax=max[i];
        }
        
    }
    printf("la temperature minimal et apparu le %d du mois (%d°C)\n",jourMin, valMin);
    printf("la temperature maximal et apparu le %d du mois (%d°C)\n",jourMax, valMax);
    return (0);
}

