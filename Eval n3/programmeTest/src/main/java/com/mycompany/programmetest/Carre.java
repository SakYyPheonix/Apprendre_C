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
public class Carre {
    private int longueur;
    
    public Carre(){
}
    public Carre(int e){
        this.longueur = e;
}    
    public int perimetre(){
        return longueur * 4;
    }
    public int aire(){
        return longueur * longueur;
    }

    public int getLongueur() {
        return longueur;
    }

    public void setLongueur(int longueur) {
        this.longueur = longueur;
    }
    
}
