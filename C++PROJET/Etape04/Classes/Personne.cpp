#include <iostream>
#include <string.h>
using namespace std;

#include "Personne.h"
#include "Modele.h"
#include "Option.h"
/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

Personne::Personne(){
	#ifndef DEBUG
		cout<<"default constructeur "<<endl;
	#endif
		setNom("sans nom");
		setPrenom("Sans Prenom");
}

Personne::Personne(string N, string Pr ){
	#ifndef DEBUG
		cout<<"Init constructeur "<<endl;
	#endif
	setNom(N);
	setPrenom(Pr);


}

Personne::Personne(const Personne& P){
	#ifndef DEBUG
		cout<<"copie constructeur "<<endl;
	#endif
	setNom(P.Nom);
	setPrenom(P.Prenom);	
}


Personne::~Personne(){
	cout<<"destructeur Personne"<<endl;

}

/**************************** *****************/
/*********Surcharge des opérateurs =***********/
/**************************** *****************/
/**************************** *****************/
Personne& Personne::operator=(const Personne& P){
	setNom(P.Nom);
	setPrenom(P.Prenom);

	return(*this);
}


/**************************** *****************/
/****Surcharge des opérateurs d'insertion*** **/
/**************************** *****************/
ostream& operator<<(ostream& out,const Personne& P){
	out<<"Nom: "<<P.Nom<<endl;
	out<<"Prenom: "<<P.Prenom<<endl;

return out;
}
istream& operator>>(istream& inpt,Personne& P){

	Personne Pr;
	cout<<"Nom: ";
	inpt>>Pr.Nom;
	cout<<"Prenom: ";
	inpt>>Pr.Prenom;

	P.setNom(Pr.getNom());
	P.setPrenom(Pr.getPrenom());
	return inpt;
}



/****************************************/
/*************Autres methodes************/
/****************************************/
void Personne::Affiche()const{
	cout<<"Nom:  "<<Nom<<endl;
	cout<<"Prenom:  "<<Prenom<<endl;
	

}


/**************************/
/*********SETTERS***********/
/**************************/
void Personne::setNom(string n){
	Nom=n;
}

void Personne::setPrenom(string Pr){
	Prenom=Pr;
}

/**************************/
/*********GETTERS***********/
/**************************/

string Personne::getNom()const{
	return Nom; 
}
string Personne::getPrenom()const{
	return Prenom;
}