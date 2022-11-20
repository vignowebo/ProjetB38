#ifndef PERSONNE_H
#define PERSONNE_H
#include <string.h>
#include "Modele.h"
#include "Option.h"



class Personne{
	protected:
		string Nom;
		string Prenom;


	public:
		Personne();
		Personne(string Nom, string Prenom);
		Personne(const Personne& P);

		//operateurs =

		Personne& operator=(const Personne& P);

	    // operateurs d'insertion 
	    friend ostream& operator<<(ostream& out,const Personne& P);
		friend istream& operator>>(istream& inpt, Personne& P);

		~Personne();
		void Affiche() const;
		void setNom(string);
		void setPrenom(string);

		string getNom()const;
		string getPrenom()const; 

};
#endif
