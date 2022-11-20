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
public class Couleur {
    private int bleu;
    private int verte;
    private int rouge;

    
    private String nom;
    public Couleur(){};

    public Couleur(int b , int v,int r,String n) throws InvalidCouleurException{
        if ( (b<0 ||b>255) || (v<0||r>255)||(r<0||r>255)) {throw new InvalidCouleurException(bleu,verte,rouge);}
        
        this.bleu=b;
        this.verte=v;
        this.rouge=r;
        this.nom=n;

        }

    @Override
    public String toString() {
        return "(" + bleu + "," + verte +"," + rouge+ "," + nom + ')';
    }
    
    

   
    public int getBleu(){return bleu;}
    public int getVerte(){return verte;}
    public String getNom(){return nom;}
    public int getRouge() {return rouge;}
    
    public void setBleu (int b) throws InvalidCouleurException{
        if ( (b<0 ||b>255) ) {throw new InvalidCouleurException(bleu,verte,rouge);}
        this.bleu= b;}
    public void setVerte (int v)throws InvalidCouleurException{
        if ( (v<0 ||v>255) ) {throw new InvalidCouleurException(bleu,verte,rouge);}
        this.verte= v;}
    public void setNom (String n){this.nom= n;}
    
    public void setRouge(int rouge) throws InvalidCouleurException{
        if ( (rouge<0 ||rouge>255) ) {throw new InvalidCouleurException(bleu,verte,rouge);}
        this.rouge = rouge;}
    
    
    
    
}
