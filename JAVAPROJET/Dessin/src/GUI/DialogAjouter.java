/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package GUI;

import java.awt.*;
import java.awt.event.*;
import Dessin.*;
/**
 *
 * @author student
 */
public class DialogAjouter extends Dialog implements ActionListener{

    private Checkbox cbP,cbL,cbR,cbr; 
    private Panel panel1,panel2,panel3,panel4,panel5,panel6,panel7,panel8,panel9;
    private TextField tfn,tfx,tfy,tfr,tfv,tfb,tfX,tfY,tfl,tfh;
    private Label label1,label2,label3,label4,label5,label6,
            label7,label8,label9,label10,label11,label12,label13,label14,label15,label16;
    private Button BntOk,BntAnnuler;
    private Figure f;
    
    
    //
    private Identifiable identifiable;
    private Pointa point;
    private Ligne ligne;
    private Couleur couleur;
    
    
    public DialogAjouter(Frame parent, boolean modal){
        super(parent, "Ajouter Figure",modal);
        //setLayout(new GridLayout(9,1));
        panel1=new Panel();
        CheckboxGroup gr=new CheckboxGroup();
        cbP=new Checkbox("Pixel",gr,true);panel1.add(cbP);
        cbL=new Checkbox("Ligne",gr,false);panel1.add(cbL);
        cbR=new Checkbox("Rectangle",gr,false);panel1.add(cbR);
        panel1.setBounds(300, 20,600,30);
        panel1.setBackground(Color.green);
        add(panel1);
        
        panel2=new Panel();
        label1= new Label();
        tfn=new TextField();
        
        panel3=new Panel();
        label2=new Label();
        label3=new Label();
        tfx=new TextField();
        label4=new Label();
        tfy=new TextField();
        

        label1.setFont(new Font("Dialog",0,10));
        label1.setBounds(5, 10, 1, 3);
        label1.setText("Numéro=");
        panel2.add(label1);
        
        tfn.setFont(new Font("Dialog",0,10));
        tfn.setBounds(5, 10, 1, 3);
        
        

        panel2.add(tfn);
        panel2.setBackground(Color.red);
        panel2.setBounds(300,40, 600, 40);
        panel2.setLayout(new BorderLayout());
        add(panel2);
        
        
        panel3.setBounds(300,60, 600, 60);

        panel3.setBackground(Color.blue);
        label2.setFont(new Font("Dialog",0,10));
        label2.setText("Position:");
        panel3.add(label2);
        
        label3.setFont(new Font("Dialog",0,10));
        label3.setAlignment(Label.RIGHT);
        label3.setText("x=");
        panel3.add(label3);
        tfx.setFont(new Font("Dialog",0,10));
        tfx.setPreferredSize(new Dimension(40,40));
        panel3.add(tfx);
        
        label4.setFont(new Font("Dialog",0,10));
        label4.setAlignment(Label.RIGHT);
        label4.setText("y=");
        panel3.add(label4);
        tfy.setFont(new Font("Dialog",0,10));
        tfy.setPreferredSize(new Dimension(400,12));
        panel3.add(tfy);
        setLayout(new BorderLayout(10,20));
        add(panel3);

        
        panel4=new Panel();
        label5=new Label();
        label6=new Label();
        tfr=new TextField();
        label7=new Label();
        tfv=new TextField();
        label8=new Label();
        tfb=new TextField();
        
        panel4.setBounds(300,60, 250, 250);
        label5.setAlignment(Label.RIGHT);
        label5.setFont(new Font("Dialog",0,10));
        label5.setText("Couleur");
        panel4.add(label5);
        
        label6.setFont(new Font("Dialog",0,10));
        label6.setAlignment(Label.RIGHT);
        label6.setText("rouge=");
        panel4.add(label6);
        tfr.setFont(new Font("Dialog",0,10));
        tfr.setPreferredSize(new Dimension(40,10));
        panel4.add(BorderLayout.EAST,tfr);
        
        label7.setFont(new Font("Dialog",0,10));
        label7.setAlignment(Label.RIGHT);
        label7.setText("vert=");
        panel4.add(label7);
        tfv.setFont(new Font("Dialog",0,10));
        tfv.setPreferredSize(new Dimension(40,10));
        panel4.add(tfv);
        
        label8.setFont(new Font("Dialog",0,10));
        label8.setAlignment(Label.RIGHT);
        label8.setText("bleu=");
        panel4.add(label8);
        tfb.setFont(new Font("Dialog",0,10));
        tfb.setPreferredSize(new Dimension(40,10));
        panel4.add(tfb);
        
        add(panel4);
        
        panel5=new Panel();
        label9=new Label();
        label10=new Label();
        tfX=new TextField();
        label11=new Label();
        tfY=new TextField();
        
        
        
        panel5.setBounds(300,60, 250, 250);
        label9.setAlignment(Label.RIGHT);
        label9.setFont(new Font("Dialog",0,10));
        label9.setText("Extrémité:");
        panel5.add(label9);
        
        label10.setFont(new Font("Dialog",0,10));
        label10.setAlignment(Label.RIGHT);
        label10.setText("x=");
        panel5.add(label10);
        tfX.setFont(new Font("Dialog",0,10));
        tfX.setPreferredSize(new Dimension(40,10));
        panel5.add(tfX);
        
        label11.setFont(new Font("Dialog",0,10));
        label11.setAlignment(Label.RIGHT);
        label11.setText("y=");
        panel5.add(label11);
        tfY.setFont(new Font("Dialog",0,10));
        tfY.setPreferredSize(new Dimension(40,10));
        panel5.add(tfY);
 
        add(panel5);
        //largeur
        panel6=new Panel();
        label12= new Label();
        tfl=new TextField();
        
        panel6.setBounds(300,60, 250, 250);
        label12.setAlignment(Label.RIGHT);
        label12.setFont(new Font("Dialog",0,10));
        label12.setText("Largeur=");
        panel6.add(label12);
        tfl.setFont(new Font("Dialog",0,10));

        panel6.add(tfl);
        add(panel6);
        
        
        //hauteur
        panel7=new Panel();
        label13= new Label();
        tfh=new TextField();
        
        panel7.setBounds(300,60, 250, 250);
        label13.setAlignment(Label.RIGHT);
        label13.setFont(new Font("Dialog",0,10));
        label13.setText("Hauteur=");
        panel7.add(label13);
        tfh.setFont(new Font("Dialog",0,10));

        panel7.add(tfh);
        add(panel7);
        
        //rempli 
        
        panel8=new Panel();
        label14=new Label();
        cbr=new Checkbox();
        panel8.setBounds(300,60, 250, 250);
        label14.setAlignment(Label.RIGHT);
        label14.setText("Rempli: ");
        
        panel8.add(label14);
        panel8.add(cbr);
        add(panel8);
        
        //ok and cancel
        panel9=new Panel();
        panel9.setLayout(new FlowLayout());
        BntOk=new Button();
        BntAnnuler=new Button();
        
        
        BntOk.setLabel("Ok");

        BntOk.addActionListener(this);
        panel9.add(BntOk);
        
        BntAnnuler.setLabel("Annuler");

        BntAnnuler.addActionListener(this);
        panel9.add(BntAnnuler);
        add(panel9);
        pack();
        
    }

    
    public Figure getFigure(){
        return f;
    }
    
    
    @Override
    public void actionPerformed(ActionEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}

