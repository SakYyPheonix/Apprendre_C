#include "biblio.h"

void moisNom(int numDate, char *mois)
{
    char tablMois[12][NBMAXCARA] = {"Janvier\0", "Fevrier\0", "Mars\0", "Avril\0", "Mai\0", "Juin\0", "Juillet\0", "Aout\0", "Septembre\0", "Octobre\0", "Novembre\0", "Decembre\0"};
    strcpy(mois, tablMois[numDate-1]);
    
}

