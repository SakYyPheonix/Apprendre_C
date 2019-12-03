

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    unsigned char val1, val2, val3, val4;
    
    val1=127;
    val2=128;
    val3=255;
    val4=0;
    
    printf("val1 = %d\n val2 = %d\n val3 = %d\n val4 = %d\n", val1, val2, val3, val4);
    
    /*
     L'affichage ne correspond pas car char utilise 1 octet (255 valeurs) signé ( de -128 a 127 )
     Il ne possède pas asser d'espace pour afficher les valeurs prévus.
     */
    return 0;
}

