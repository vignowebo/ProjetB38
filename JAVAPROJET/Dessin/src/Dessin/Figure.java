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
abstract class Figure {
    private int numero;
    private Pointa position;
    private Couleur color;

    public Figure(int n, Pointa p, Couleur c) {
        this.numero=n;
        this.position=p;
        this.color=c;
    }


    
    public int getNumero() {return numero;}

    public Pointa getPosition() {return position;}

    public Couleur getColor() {return color;}
    
    
    
    public void setNumero(int numero) {this.numero = numero;}

    public void setPosition(Pointa position) {this.position = position;}

    public void setColor(Couleur color) {this.color = color;}
    
    
    
    
    
   
    
    
}
