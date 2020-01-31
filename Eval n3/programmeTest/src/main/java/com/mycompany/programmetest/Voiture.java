/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.programmetest;

/**
 *
 * @author cbourgouin
 */
public class Voiture {
    private String couleur;
    private int nbKilometres;
    
    public Voiture(String c, int nb){
        this.couleur = c;
        this.nbKilometres = nb;
    }
    public void rouler(int distance)
    {
        nbKilometres+=distance;
    }
    public void afficher()
    {
        System.out.println("nb de km : "+nbKilometres);
        System.out.println("couleur : "+couleur);
        
    }

    public String getCouleur() {
        return couleur;
    }

    public void setCouleur(String couleur) {
        this.couleur = couleur;
    }

    public int getNbKilometres() {
        return nbKilometres;
    }

    public void setNbKilometres(int nbKilometres) {
        this.nbKilometres = nbKilometres;
    }
    
    
}
