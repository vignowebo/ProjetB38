#include <iostream>
#include <string.h>
using namespace std;

#include "Client.h"

/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

Client::Client():Intervenant(){
	setGsm("Pas de Gsm");

}

Client::Client(string Nom, string Prenom,int Num,string gs):Intervenant(Nom,Prenom,Num){
	setGsm(gs);

}
	

Client::Client(const Client& C):Intervenant(C){

	setGsm(C.Gsm);
	
}

Client& Client::operator=(const Client& C){
	Intervenant::operator=(C);
	setGsm(C.Gsm);

	return(*this);
}


Client::~Client(){
	cout<<"destructeur client"<<endl;
	

}

/***********************************************/
/*************Autre methodes getters setters*******************/
/***********************************************/
void Client::setGsm(string g){
	Gsm=g;

}


ostream& operator<<(ostream& out,const Client& C){

	out<<"Nom: "<<C.Nom<<endl;
	out<<"Prenom: "<<C.Prenom<<endl;
	out<<"Numero: "<<C.Numero<<endl;
	out<<"Gsm: "<<C.Gsm<<endl;

return out;}

////setters

string Client::getGsm()const{
	return Gsm;

}


///////methode publique

string Client::Tuple()const{ 

	return " " + to_string((*this).getNumero())+ ";" + (*this).getNom() + ';' + (*this).getPrenom() + ";" + (*this).Gsm;
}
string Client::ToString()const{


	return"[C" + to_string((*this).getNumero()) + "] " + (*this).getNom() + " " + (*this).getPrenom();
}
