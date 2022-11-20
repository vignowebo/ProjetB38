/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package GUI;

/**
 *
 * @author student
 */
import java.awt.*;
import java.awt.event.*;
public class Controleur implements ActionListener,WindowListener{    
    private MainFrame ff;
    private DialogAjouter da;
    
    public Controleur(MainFrame f,DialogAjouter d){
        ff=f;
        da=d; 
  
    
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        DialogAjouter dialog=new DialogAjouter(ff,true );
        if(e.getActionCommand().equals("Ajouter")){
           // DialogAjouter dialog=new DialogAjouter(ff,true );
            dialog.setLocation(100, 100);
            dialog.setSize(900, 500);
            dialog.setLayout(null);
            dialog.setVisible(true);
            dialog.dispose();
        }
         if(e.getActionCommand().equals("Lister")&& list.getSelectedIndex()!=-1){
           // DialogAjouter dialog=new DialogAjouter(ff,true );
            dialog.setLocation(100, 100);
            dialog.setSize(900, 500);
            dialog.setLayout(null);
            dialog.setVisible(true);
            dialog.dispose();
        }
        
        
    }

    @Override
    public void windowOpened(WindowEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void windowClosing(WindowEvent e) {
        System.exit(0);
    }

    @Override
    public void windowClosed(WindowEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void windowIconified(WindowEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void windowDeiconified(WindowEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void windowActivated(WindowEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void windowDeactivated(WindowEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
