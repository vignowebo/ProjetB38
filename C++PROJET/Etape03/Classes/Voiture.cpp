#include <iostream>
#include <string.h>
using namespace std;

#include "Voiture.h"
#include "Modele.h"
#include "Option.h"
/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

Voiture::Voiture(){
	#ifndef DEBUG
		cout<<"default constructeur "<<endl;
	#endif
		setName("sans nom");
		setModele(modele);
	for(int i=0; i<5;i++){
		options[i]=NULL;
	}
}

Voiture::Voiture(string N, const Modele& model){
	#ifndef DEBUG
		cout<<"Init constructeur "<<endl;
	#endif
	setName(N);
	setModele(model);
	for(int i=0; i<5;i++){
		options[i]=NULL;
	}	


}

Voiture::Voiture(const Voiture& V){
	#ifndef DEBUG
		cout<<"copie constructeur "<<endl;
	#endif
	setName(V.Name);
	setModele(V.modele);
	for(int i=0; i<5;i++){
		options[i]=NULL;
	}
	for(int i=0; i<5;i++){
		if (V.options[i]!=NULL){
			AjouteOption(*V.options[i]);
		}
	}
	
}


Voiture::~Voiture(){
	for (int i=0; i<5; i++){
		if(options[i]!=NULL){
			delete options[i];
		}
	}

}

/**************************** *****************/
/*********Surcharge des opérateurs =, + et – **/
/**************************** *****************/
/**************************** *****************/
Voiture& Voiture::operator=(const Voiture& V){
	setName(V.Name);
	setModele(V.modele);
	for(int i=0; i<5;i++){
		if(options[i]!=NULL){
			delete options[i];
			options[i]=NULL;
		}

	}
	for(int i=0; i<5;i++){
		if (V.options[i]!=NULL){
			AjouteOption(*V.options[i]);
		}
	}
	return(*this);
}

Voiture operator+(const Voiture & v,const Option & op){
  Voiture ov(v);
  ov.AjouteOption(op);
  return ov;
}

Voiture operator+(const Option & op,const Voiture & ov){
  return ov + op;
}

Voiture operator-(const Voiture & v,string op){
  
  Voiture ov(v);

  ov.RetireOption(op);

  return ov;

}

Voiture operator-(const Voiture & v,const Option & op){
  Voiture ov(v);
  ov.RetireOption(op.getCode());
  return ov;
}

/**************************** *****************/
/****Surcharge des opérateurs de comparaison **/
/**************************** *****************/
int Voiture::operator< (const Voiture& V){
	if((*this).getPrix()<V.getPrix()) return 1;
	return 0;
}
int Voiture::operator> (const Voiture& V){
	if((*this).getPrix()>V.getPrix()) return 1;
	return 0;
}
int Voiture::operator== (const Voiture& V){
	if((*this).getPrix()==V.getPrix()) return 1;
	return 0;
}

/**************************** *****************/
/****Surcharge des opérateurs d'insertion*** **/
/**************************** *****************/
ostream& operator<<(ostream& out,const Voiture& V){
	out<<"Nom: "<<V.Name<<endl;
	out<<"Modele: "<<V.modele<<endl;
	out<<"Option: "<<endl;
	for(int i=0; i<5; i++){

		if(V.options[i]!=NULL){
			out<<*V.options[i];


		}
	}
return out;
}
/***********************************/
/****Surcharge de opérateur []*** **/
/**************************** ******/
Option * Voiture::operator[](int i){
	return options[i];
}


/****************************************/
/*************Autres methodes************/
/****************************************/
void Voiture::Affiche()const{
	cout<<"Name:  "<<Name<<endl<<"Modele: ";
	modele.Affiche();
	cout<<"Options: "<<endl;
	for(int i=0; i<5; i++){

		if(options[i]!=NULL){
			options[i]->Affiche();

		}
	}
}

void Voiture::AjouteOption(const Option& option){
	for(int i=0; i<5; i++){
		if (options[i]==NULL){

			options[i]=new Option;

			options[i]->setCode(option.getCode());
			options[i]->setIntitule(option.getIntitule());
			options[i]->setPrix(option.getPrix());
			return;

	}

	}
	
}


void Voiture::RetireOption(string code){
	for(int i=0;i<5;i++){

		if (options[i]!=NULL && options[i]->getCode()==code){
			delete options[i];
			options[i]=NULL;
			return;
		}
			
	}

}

float Voiture::getPrix()const{

	float sum=0;
	float prix=0;
	for(int i=0;i<5;i++){

		if (options[i]!=NULL){
			sum=sum+options[i]->getPrix();
		}
			
	}
	prix=modele.getPrix()+sum;
	return prix;

}

/**************************/
/*********SETTERS***********/
/**************************/
void Voiture::setName(string n){
	Name=n;
}

void Voiture::setModele(const Modele& m){
	//modele=Modele(m);
	//modele=Modele(m.Modele());

	modele.setNom(m.getNom());
	modele.setPuissance(m.getPuissance());
	modele.setMoteur(m.getMoteur());
	modele.setPrix(m.getPrix());
}

/**************************/
/*********GETTERS***********/
/**************************/

string Voiture::getName()const{
	return Name; 
}
Modele Voiture::getModele()const{
	return modele;
}