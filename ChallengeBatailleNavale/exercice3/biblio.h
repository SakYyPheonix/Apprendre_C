
/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 10 janvier 2020, 15:11
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef BIBLIO_H
#define BIBLIO_H
#define NBCAR 255
#define NBELE 5
#define NBBATEAU 2

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct bateau {
        int x;
        int y;
        int taille;
        char sens;
        char nom[NBCAR];
        int cases[NBELE];
    }typeBateau;
    
    typedef struct champDeBataille {
        typeBateau porteAvions;
        typeBateau cuirassé;
        typeBateau croiseur;
        typeBateau sousMarin;
        typeBateau destroyeur;
    };

    int torpillerBateau(typeBateau *bateau, int x, int y);

#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

