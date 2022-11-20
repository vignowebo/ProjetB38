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
class Pixel extends Figure implements Identifiable {
    
  
    public Pixel(int n,Pointa p, Couleur c) {
        super(n,p,c);
    }

   
    @Override
    public String getIdentifiant() {
        
        return(("P"+getNumero())) ;
        
    }
    
    
}
