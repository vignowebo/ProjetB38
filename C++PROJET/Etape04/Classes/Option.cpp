#include <iostream>
#include <string.h>
using namespace std;

#include "Option.h"
#include "Modele.h"
/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

Option::Option(){
	#ifndef DEBUG
		cout<<"default constructeur "<<endl;
	#endif
		setCode(" sans code ");
		setIntitule("Sans Intitule");
		prix=0;
}

Option::Option(string C, string I, float Pr){
	#ifndef DEBUG
		cout<<"Init constructeur "<<endl;
	#endif
	setCode(C);
	setIntitule(I);
	prix=Pr;


}
Option::Option(const Option& O){
	#ifndef DEBUG
		cout<<"Copie constructeur "<<endl;
	#endif
	setCode(O.Code);
	setIntitule(O.Intitule);
	prix=O.prix;
	
}

Option& Option::operator=(const Option& O){
	#ifndef DEBUG
		cout<<"Copie constructeur "<<endl;
	#endif
	setCode(O.Code);
	setIntitule(O.Intitule);
	prix=O.prix;
	return(*this);
}
ostream& operator<<(ostream& out,const Option& op){
	out<<"Code:  "<<op.getCode()<<endl<<"Intitule "<< op.getIntitule()<<endl<<"Prix  "<<op.getPrix()<<endl;
	return out;
}
istream& operator>>(istream& inpt,Option& op){
	Option OP;
	cout<<"Code: ";
	inpt>>OP.Code;
	cout<<"Intitule: ";
	inpt>>OP.Intitule;
	cout<<"Prix: ";
	inpt>>OP.prix;

	op.setCode(OP.getCode());
	op.setIntitule(OP.getIntitule());
	op.setPrix(OP.getPrix());
	return inpt;
}
/**************************** ********************************/
/****Surcharge des opérateurs de pré/post-décrémentation*** **/
/**************************** ********************************/
Option Option ::operator--(){///pré
	(*this).prix=(*this).prix -50;
	return(*this);
}
Option Option ::operator--(int){//post
	Option temp(*this);
	(*this).prix=(*this).prix -50;
	return temp; 
}

void Option::Affiche()const{
	cout<<"Code:  "<<Code<<endl<<"Intitule "<< Intitule<<endl<<"Prix  "<<prix<<endl;
}
/**************************/
/*********SETTERS***********/
/**************************/
void Option::setCode(string c){
	Code=c;
}

void Option::setIntitule(string i){
	Intitule=i;
}


void Option::setPrix(float p){
	prix=p;
}

/**************************/
/*********GETTERS***********/
/**************************/

string Option::getCode()const{
	return Code; 
}

string Option::getIntitule()const{
	return Intitule; 
}
float Option::getPrix()const{
	return prix;
}