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
class Rectangle extends Figure implements Identifiable{
    private int largeur ;
    private int hauteur;
    private boolean bool;

    public Rectangle(int n,Pointa p, Couleur c, int l,int h, boolean b) {
        super(n,p,c);
        this.largeur=l;
        this.hauteur=h;
        this.bool=b;
    }

    
    
    
    public int getLargeur() {return largeur;}
    public int getHauteur() {return hauteur;}
    public boolean isBool() {return bool; }

    public void setLargeur(int largeur) {this.largeur = largeur;}
    public void setHauteur(int hauteur) {this.hauteur = hauteur;}
    public void setBool(boolean bool) {this.bool = bool;}
   
    @Override
    public String getIdentifiant() {
        return("R"+getNumero());
        
    }
    @Override
    public String toString() {
        return  "largeur=" + largeur + ", hauteur=" + hauteur + ", bool=" + bool ;
    }
    
    
}
