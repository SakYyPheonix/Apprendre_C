#include "biblio.h"
#include <math.h>

void discriminant(float a, float b, float c,float *racine1, float *racine2)
{
    float dis;
    
    dis = pow(b, 2) -4*a*c;
    
    if(dis == 0)
    {
        *racine1 = -b/2*a;
        racine2 = racine1;
    }
    else
    {
        if(dis > 0)
        {
            *racine1 = (-b-sqrt(dis))/(2*a);
            *racine2 = (-b+sqrt(dis))/(2*a);
        }
        else
        {
            if(dis < 0)
            {
                *racine1 = 0;
                *racine2 = 0;
            }
        }
    }
}
