
/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 10 janvier 2020, 15:11
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#define NBCAR 255
#define NBELE 5

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
    }Bateau;


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

