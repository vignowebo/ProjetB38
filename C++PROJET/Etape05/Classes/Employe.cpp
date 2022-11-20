#include <iostream>
#include <string.h>
using namespace std;

#include "Employe.h"

/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

Employe::Employe():Intervenant(){
	setLogin("Pas login");
	motDePasse=NULL;
	setMotDePasse("Pas motDePasse");
	setFonction("Pas de Fonction");

}

Employe::Employe(string Nom, string Prenom,int Num,string lo,string fct):Intervenant(Nom,Prenom,Num){
	motDePasse=NULL;
	setMotDePasse("");
	setLogin(lo);
	setFonction(fct);
}
	

Employe::Employe(const Employe& E){
	setNom(E.Nom);
	setPrenom(E.Prenom);
	setNumero(E.Numero);
	motDePasse=NULL;
	setMotDePasse(E.getMotDePasse());
	setLogin(E.login);
	setFonction(E.fonction);

}

Employe& Employe::operator=(const Employe& E){
	Intervenant::operator=(E);
	setLogin(E.login);
	setFonction(E.fonction);
	return(*this);
}


Employe::~Employe(){
	cout<<"destructeur employé"<<endl;

}

/***********************************************/
/*************Autre methodes getters setters*******************/
/***********************************************/
void Employe:: setLogin(string lo){

	login=lo;
}
void Employe:: setMotDePasse(string mdp){
	if(motDePasse) delete motDePasse;

	motDePasse=new string(mdp);
}
void Employe:: setFonction(string fct){
	fonction=fct;
}
/// operateur <<

ostream& operator<<(ostream& out,const Employe& E){
	
	out<<"Nom: "<<E.Nom<<endl;
	out<<"Prenom: "<<E.Prenom<<endl;
	out<<"Numero: "<<E.Numero<<endl;
	out<<"login: "<<E.login<<endl;
	if (E.getMotDePasse()==""){
		out<<"motDePasse: "<<"Pas de motDePasse"<<endl;
	}
	else{out<<"motDePasse: "<<E.getMotDePasse()<<endl;}

	out<<"Fonction: "<<E.fonction<<endl;
return out;
}


////setters


string Employe:: getLogin()const{
	return login;
}
string Employe:: getMotDePasse()const{
	return *motDePasse;

}
string Employe:: getFonction()const{
	return fonction;
}


///////methode publique

string Employe::Tuple()const{
	return " " + to_string((*this).getNumero())+ ";" + (*this).getNom() + ';' + (*this).getPrenom();
}
string Employe::ToString()const{

	if(fonction==VENDEUR)

		return"[V" + to_string((*this).getNumero()) + "] " + (*this).getNom() + " " + (*this).getPrenom();
	else
		return"[A" + to_string((*this).getNumero()) + "] " + (*this).getNom() + " " + (*this).getPrenom();
}
void Employe::ResetMotDePasse(){
	if(motDePasse) delete motDePasse;
	motDePasse=NULL;
}
const string Employe::ADMINISTRATIF= "Administratif";
const string Employe::VENDEUR= "Vendeur";