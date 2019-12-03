
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>


float calculerCarre(int val)
{
    int resultat;
    resultat=val*val;
    return resultat;
}

float calculerDiscriminant(int val1, int val2, int val3)
{
    int delta;
    delta = calculerCarre(val2)-4*val1*val3;
    return delta;
}

void afficherRacines(float val)
{
    float res;
    res = sqrt(val);
    printf("%.3f", res);
}

void afficherUneLigne(int val)
{
    int i;
    
    for(i=0; i<val; i++)
    {
        printf("*");
    }
}

void afficherUnCarre(int val)
{
    int i;
    int u;
    
    for(i=0; i<val; i++)
    {
        for(u=0; u<val; u++)
        {
            printf("*");
        }
        printf("\n");
    }
}