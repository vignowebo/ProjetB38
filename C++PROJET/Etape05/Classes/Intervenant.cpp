#include <iostream>
#include <string.h>
using namespace std;

#include "Intervenant.h"

/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

Intervenant::Intervenant():Personne(){
	Numero=0;


}

Intervenant::Intervenant(string No,string Pr ,int Numero):Personne(No,Pr){

	setNumero(Numero);

}
	

Intervenant::Intervenant(const Intervenant& I):Personne(I){

	setNumero(I.Numero);


}

Intervenant& Intervenant::operator=(const Intervenant& I){
	Personne::operator=(I);
	setNumero(I.Numero);

	return(*this);
}



Intervenant::~Intervenant(){
	cout<<"destructeur Intervenant"<<endl;


}

/***********************************************/
/*************Autre methodes getters setters*******************/
/***********************************************/
void Intervenant::setNumero(int Nu){
	Numero=Nu;

}

int Intervenant::getNumero()const{
	return Numero;
}
///////methode publique

