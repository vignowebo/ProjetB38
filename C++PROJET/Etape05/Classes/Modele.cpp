#include <iostream>
#include <string.h>
using namespace std;

#include "Modele.h"

/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

Modele::Modele(){
	#ifndef DEBUG
		cout<<"default constructeur"<<endl;
	#endif
	// nom=new char[50];
	// strcpy(nom, "Modele sans nom");
	nom=NULL;

	setNom("Modele sans nom"); //ou
	puissance=0;
	moteur=Essence;
	prix=0;
	

}

Modele::Modele(const char *n, int pui, Moteur mot, float pr){
	nom=NULL;
	setNom(n);
	puissance=pui;
	moteur=mot;
	prix=pr;
}
	

Modele::Modele(const Modele& M){
	nom=NULL;
	setNom(M.nom);
	puissance=M.puissance;
	moteur=M.moteur;
	prix=M.prix;
}

Modele& Modele::operator=(const Modele& M){
	nom=NULL;
	setNom(M.nom);
	puissance=M.puissance;
	moteur=M.moteur;
	prix=M.prix;

	return(*this);
}
ostream& operator<<(ostream& out,const Modele & M){

	out<<M.nom<<" "<<M.puissance<< " "<< M.prix <<" ";
	switch(M.moteur){
		case Essence: out<<"Essence"<<endl;
			break;
		case Diesel: out<<"Diesel"<<endl;
			break;
		case Electrique: out<<"Electrique"<<endl;
			break;
		case Hybride: out<<"Hybride"<<endl;
			break;
	}
	return out;
}
istream& operator>>(istream& inpt,Moteur& m){
	int mm;
	inpt>>mm;
	m=static_cast<Moteur>(mm);
	return inpt;

}
istream& operator>>(istream& inpt,Modele & M){
	Modele Mo;
	cout<<"Nom: ";
	inpt>>Mo.nom;
	cout<<"Puissance: ";
	inpt>>Mo.puissance;
	cout<<"Moteur ->(0)Essence, (1)Diesel, (2)Electrique, (3)Hybride : ";
	inpt>>Mo.moteur;
	cout<<"Prix: ";
	inpt>>Mo.prix;

	M.setNom(Mo.getNom());
	M.setPuissance(Mo.getPuissance());
	M.setMoteur(Mo.getMoteur());
	M.setPrix(Mo.getPrix());
	return inpt;
	

}


Modele::~Modele(){
	if(nom)
		delete [] nom;

}

/***********************************************/
/*************Autre methodes getters setters*******************/
/***********************************************/
void Modele::setNom(const char*n){
	if(nom)
		delete [] nom;
	nom=new char[strlen(n)+1];
	strcpy(nom,n);
}


void Modele::setMoteur(Moteur m){

	moteur=m;
}

void Modele::setPrix(const float Pr){
	prix=Pr;
    

}
void Modele::setPuissance(const int Pui){
	puissance=Pui;


}
////setters

const char* Modele::getNom()const{
	return nom;

}
Moteur Modele::  getMoteur()const{
	return moteur;
}
int    Modele::  getPuissance()const{
	return puissance;

}
float  Modele::  getPrix()const{
	return prix;
}




///////methode publique

void Modele::Affiche()const{

	cout<<nom<<" "<<puissance<< " "<< prix ;
	switch(moteur){
		case Essence: cout<<"Essence"<<endl;
			break;
		case Diesel: cout<<"Diesel"<<endl;
			break;
		case Electrique: cout<<"Electrique"<<endl;
			break;
		case Hybride: cout<<"Hybride"<<endl;
			break;
	}
}
