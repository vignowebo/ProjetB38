/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Dessin;

/**
 *
 * @author student
 */
public class MyMain {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args){
        try{
        Pointa p;
        p = new Pointa(20,30);
        Couleur c=new Couleur(255,255,255,"charles");
        
        Pixel P1=new Pixel(1,p,c);
        
        P1.setNumero(1);

        P1.setPosition(p);
        P1.setColor(c);
        
        c.setBleu(255);
        //c.setVerte(0);
        //c.setRouge(0);
        //c.setNom("---");
        
        
        Pointa p1;
        Pointa p2;
        p1 = new Pointa(60,60);
        p2 = new Pointa(200,200);
        
        Ligne L2=new Ligne(2,p1,c,p2);
        L2.setColor(c);
        L2.setPosition(p1);
        L2.setPosition2(p2);
        
       
        
        Rectangle R3;
        R3=new Rectangle(3,p1,c,200,100,true);
        R3.setHauteur(300);
        R3.setColor(c);
        R3.setPosition(p2);
      
        
        
        //System.out.println(c.getBleu()+" "+c.getVerte()+" "+c.getNom());
        System.out.println("PIXEL "+ P1.getIdentifiant()+": position= "+P1.getPosition()+" couleur= "+P1.getColor());
        System.out.println("LIGNE "+ L2.getIdentifiant()+": p1="+L2.getPosition()+" p2="+L2.getPosition2()+" couleur="+P1.getColor());
        System.out.println("RECTANGLE "+ R3.getIdentifiant()+": position="+R3.getPosition()+R3.toString()+" couleur="+R3.getColor());
        }
        catch(InvalidCouleurException ex){
            System.out.println ("Erreur de couleur") ;
            System.exit(-1);
        }
        
    }
    
}
