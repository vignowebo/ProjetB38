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