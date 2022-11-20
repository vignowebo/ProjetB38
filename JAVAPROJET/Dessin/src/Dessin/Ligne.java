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
public class Ligne extends Figure implements Identifiable {
    private Pointa position2;

    public Ligne(int n,Pointa p, Couleur c,Pointa p2) {
        super(n,p,c);
        this.position2=p2;
    }

    public Pointa getPosition2() {
        return position2;
    }

    public void setPosition2(Pointa position2) {
        this.position2 = position2;
    }

    @Override
    public String getIdentifiant() {
     
        return("L"+getNumero());
        
        
        
    }
    
    
}
