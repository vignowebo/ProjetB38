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
public class InvalidCouleurException extends Exception {
    public int blue,green,red;
  
    public InvalidCouleurException(int blue,int green,int red) {
        this.blue=blue;
        this.green=green;
        this.red=red;
        
        
    }
}
