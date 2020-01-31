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
public class TestCarre {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Carre monCarre;
        int perim;
        int aire;
        monCarre = new Carre(15);
        perim = monCarre.perimetre();
        aire = monCarre.aire();
        System.out.println("perimetre : "+perim);
        System.out.println("aire : "+aire);

    }
    
}
