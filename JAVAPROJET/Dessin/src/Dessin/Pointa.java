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
public class Pointa {
    private int x;
    private int y;

    public Pointa(int x, int y) {
        this.x = x;
        this.y = y;
    }

    @Override
    public String toString() {
        return "("+ x + "," + y + ')';
    }
    
    
    
    public void setY(int y) {this.y = y;}
    public void setX(int x) {this.x = x;}
    
    public int getX() {return x;}
    public int getY() {return y;}

    
   
}
