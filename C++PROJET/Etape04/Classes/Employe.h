#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string.h>

#include "Intervenant.h"


class Employe:public Intervenant  {
	
	private:
		string login;
		string *motDePasse;
		string fonction;



	public:
		Employe();
		Employe(string Nom,string Prenom,int Num,string lo,string fct);
		Employe(const Employe& E);
		static const string ADMINISTRATIF;
		static const string VENDEUR;

		//operateurs =

		Employe& operator=(const Employe& E);
	
	    // operateurs d'insertion 
	   	friend ostream& operator<<(ostream& out,const Employe& E);

		~Employe();
		void setLogin(string lo);
		void setMotDePasse(string mdp);
		void setFonction(string fct);

		string getLogin()const;
		string getMotDePasse()const;
		string getFonction()const;		
		
		string Tuple()const;
		string ToString()const;
		void ResetMotDePasse(); 
		

};
#endif
