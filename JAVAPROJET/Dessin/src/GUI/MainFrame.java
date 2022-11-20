/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package GUI;

import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import Dessin.*;
/**
 *
 * @author student
 */
public class MainFrame extends Frame implements ActionListener,WindowListener {
    
    ArrayList<Figure> listf=new ArrayList<>();
    private Panel  panel1,panel2;
    private MenuBar mb;
    private Label label1;     
    protected Button BntAjouter,BntSupprimer,BntModifier,BntLister;
    private Menu menu;
    private TextField  tf;
    public List list;
    
    
    public MainFrame(){

        label1=new Label("Figure");
        panel1= new Panel();
        list=new List();
        panel2=new Panel();
        BntAjouter=new Button();
        BntSupprimer=new Button();
        BntModifier=new Button();
        BntLister=new Button();
        
        setTitle("Vignon Arts ");
        //setLayout(new GridLayout(2,1));

        
        add(label1,BorderLayout.NORTH);
        //tf.setPreferredSize(new Dimension(700,400));
        list.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                listActionPerformed(e);}});
        
        addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent e){exitForm(e);}    
        });
        //tf.setEditable(false);
        list.setBackground(Color.cyan);
        add(list,BorderLayout.CENTER);
        
        BntAjouter.setLabel("Ajouter");
        BntAjouter.setBounds(30,100,80,30);
        BntAjouter.addActionListener(this);
        panel1.add(BntAjouter);
       
       
        
        BntSupprimer.setLabel("Supprimer");
        BntSupprimer.addActionListener(this);
        panel1.add(BntSupprimer);
        BntModifier.setLabel("Modifier");
        panel1.add(BntModifier);
        
        BntLister.setLabel("Listes les ID");
        BntLister.addActionListener(this);
        panel1.add(BntLister);
        add(panel1,BorderLayout.SOUTH);
        pack();
    }
    
    private void listActionPerformed(ActionEvent e) { }
    private void exitForm(WindowEvent e){}
    
    
    public void setControleur(Controleur c){
        BntAjouter.addActionListener(c);
        BntSupprimer.addActionListener(c);
        BntModifier.addActionListener(c);
        BntLister.addActionListener(c);
        this.addWindowListener(c);
    
    }
    
    public static void main (String args[]){
        MainFrame ff= new MainFrame();
        DialogAjouter da= new DialogAjouter(ff, true);
        Controleur controleur=new Controleur(ff,da);
        ff.setControleur(controleur);

        ff.setSize(700, 500);
        ff.setResizable(true);
        
        ff.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        
        if(e.getSource()==BntAjouter){
            DialogAjouter dialog=new DialogAjouter(this,true );
            dialog.setLocation(100, 100);
            dialog.setSize(900, 500);
            dialog.setLayout(null);
            dialog.setVisible(true);
            listf.add(dialog.getFigure());
            list.add(dialog.getFigure().toString());
            dialog.dispose();
        }
        
        if(e.getSource()==BntSupprimer&&list.getSelectedIndex()!=-1){
            listf.remove(list.getSelectedIndex());
            list.remove(list.getSelectedIndex());
        }
        
        
        
    }

    @Override
    public void windowOpened(WindowEvent e) {
        
    }

    @Override
    public void windowClosing(WindowEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
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



