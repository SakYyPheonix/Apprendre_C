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
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Voiture maVoiture;
        maVoiture = new Voiture("rouge", 3000);
        System.out.println("nb de km : "+maVoiture.getNbKilometres());
        System.out.println("couleur : "+maVoiture.getCouleur());
        maVoiture.rouler(15);
        
    }
   
    
}
