

/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 6 décembre 2019, 15:04
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#define NBCARAMAX 50
#define NBCARABADGE 11

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct personne{
        char nom[NBCARAMAX];
        char prenom[NBCARAMAX];
        char numBadge[NBCARABADGE];
        int numActivite;
    }typePersonne;
    
    typePersonne *creePersonne();


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

