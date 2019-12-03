
#include "Biblio.h"


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

void afficherRacines(float a,float b, float c)
{
    float delta;
    delta=calculerDiscriminant(a,b,c);
    res = sqrt(val);
    printf("%.3f", res);
}