#include "biblio.h"

char *moisNom(int numDate)
{
    char *leMois;
    char tablMois[12][NBMAXCARA] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
    leMois = (char *) malloc((strlen(tablMois[numDate-1]) +1 )*sizeof(char));
    strcpy(leMois, tablMois[numDate-1]);
    return leMois;
    
}

