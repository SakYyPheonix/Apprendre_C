#include "biblio.h"

void afficherErreur(){
    if(errno != 0){
        printf("erreur n'%d : %s\n", errno, strerror(errno));
        exit(errno);
    }
}

void decompressBmp(char source[], char destination[]){
    FILE *fchSource;
    FILE *fchDestination;
    int i;
    typeEnTeteFichierBmp bufferEnTete;
    typeCouleur bufferCouleur;
    char repetition;
    char valeurOctet;
    
    //ouverture fichier
    fchSource = fopen(source, "r");
    afficherErreur();
    fchDestination = fopen(destination, "w+");
    afficherErreur();
    
    //copie de l'entete
    fread(&bufferEnTete, sizeof(typeEnTeteFichierBmp), 1, fchSource);
    afficherErreur();
    fwrite(&bufferEnTete, sizeof(typeEnTeteFichierBmp), 1, fchDestination);
    afficherErreur();
    
    //copie de la palette
    for(i=0; i<bufferEnTete.EnTeteImageBmp.nbCouleursUtilises; i++){
        fread(&bufferCouleur, sizeof(typeCouleur), 1, fchSource);
        afficherErreur();
        fwrite(&bufferCouleur, sizeof(typeCouleur), 1, fchDestination);
        afficherErreur();
    }
    
    //decompression de l'image
    do{
        fread(&repetition, sizeof(char), 1, fchSource);
        afficherErreur();
        fread(&valeurOctet, sizeof(char), 1, fchSource);
        afficherErreur();
        for(i=0; i<repetition; i++){
            fwrite(&valeurOctet, sizeof(char), 1, fchDestination);
            afficherErreur();
        }
    }while(repetition != 00 || valeurOctet != 01);
    
    //changement de l'en tete
    bufferEnTete.tailleFichier = bufferEnTete.EnTeteImageBmp.tailleImage + 1078;
    bufferEnTete.EnTeteImageBmp.typeCompression = 0;
    
    //Modification de l'entete
    fseek(fchDestination, 0, SEEK_SET);
    afficherErreur();
    fwrite(&bufferEnTete, sizeof(typeEnTeteFichierBmp), 1, fchDestination);
    afficherErreur();
    
    //fermeture
    fclose(fchSource);
    afficherErreur();
    fclose(fchDestination);
    afficherErreur();
}

void compressBmp(char source[], char destination[]){
    FILE *fchSource;
    FILE *fchDestination;
    int i;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned int tailleImg = 0;
    unsigned int nbRepet = 1;
    char *tabLigne;
    unsigned int nbLigne = 0;
    typeEnTeteFichierBmp bufferEnTete;
    typeCouleur bufferCouleur;
    int ligne;
    int cpt;
    char nbOctet;
    
    //ouverture fichier
    fchSource = fopen(source, "r");
    afficherErreur();
    fchDestination = fopen(destination, "w+");
    afficherErreur();
    
    //copie de l'entete et definition des variable
    fread(&bufferEnTete, sizeof(typeEnTeteFichierBmp), 1, fchSource);
    afficherErreur();
    largeur = bufferEnTete.EnTeteImageBmp.largeur;
    hauteur = bufferEnTete.EnTeteImageBmp.hauteur;
    *tabLigne = (char *) malloc(sizeof(char)*largeur);
    fwrite(&bufferEnTete, sizeof(typeEnTeteFichierBmp), 1, fchDestination);
    afficherErreur();
    
    //copie de la palette
    for(i=0; i<bufferEnTete.EnTeteImageBmp.nbCouleursUtilises; i++){
        fread(&bufferCouleur, sizeof(typeCouleur), 1, fchSource);
        afficherErreur();
        fwrite(&bufferCouleur, sizeof(typeCouleur), 1, fchDestination);
        afficherErreur();
    }
    
    for(ligne = 0; ligne<hauteur; ligne++){
        fread(tabLigne, sizeof(char), largeur, fchSource);
        afficherErreur();
        for(cpt=1; cpt<largeur-1; cpt++){
            char courant = tabLigne[cpt];
            nbRepet = 1;
            int i = cpt+1;
            while(i!=largeur && tabLigne[i]==courant){
                nbRepet++;
                i++;
            }
            cpt=cpt+nbRepet-1;
            while(nbRepet>=255){
                nbOctet = 255;
                fwrite(&nbOctet, sizeof(char), 1, fchDestination);
                afficherErreur();
                fwrite(&courant, sizeof(char), 1, fchDestination);
                afficherErreur();
                nbRepet=nbRepet - 255;
                tailleImg = tailleImg + 2;
            }
            if(nbRepet>0){
                nbOctet = nbRepet;
                fwrite(&nbOctet, sizeof(char), 1, fchDestination);
                afficherErreur();
                fwrite(&courant, sizeof(char), 1, fchDestination);
                afficherErreur();
                tailleImg = tailleImg + 2;
            }
            
        }
        fwrite(00, sizeof(char), 1, fchDestination);
        afficherErreur();
        fwrite(00, sizeof(char), 1, fchDestination);
        afficherErreur();
        tailleImg = tailleImg + 2;
    }
    fwrite(00, sizeof(char), 1, fchDestination);
    afficherErreur();
    fwrite(01, sizeof(char), 1, fchDestination);
    afficherErreur();
    tailleImg = tailleImg + 2;
}