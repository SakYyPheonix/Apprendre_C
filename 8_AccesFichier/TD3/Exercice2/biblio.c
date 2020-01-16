#include "biblio.h"
void afficherEnTeteFichierBmp(typeEnTeteFichierBmp bmp){
    printf("signature : %c%c\n", bmp.signature[0], bmp.signature[1]);
    printf("taille fichier : %u\n", bmp.tailleFichier);
    printf("reserve : %u\n", bmp.reserve);
    printf("adresse : %u\n", bmp.adrInfImg);
}
    
void afficherEnTeteImageBmp(typeEnTeteImage img){
    printf("taille en tete : %u\n", img.tailleET);
    printf("largeur : %u\n", img.largeurImg);
    printf("hauteur : %u\n", img.hauteurImg);
    printf("nb de plans : %hu\n", img.nbDP);
    printf("bit par pixel : %hu\n", img.bitPPix);
    printf("type de compression : %u\n", img.TypeDeComp);
    printf("taille image : %u\n", img.tailleImg);
    printf("Resolution Horizontale : %u\n", img.resHor);
    printf("Resolution Verticale : %u\n", img.resVer);
    printf("NB couleurs utilise : %u\n", img.nbCouleur);
    printf("NB couleurs importante : %u\n", img.nbCouImp);
}
