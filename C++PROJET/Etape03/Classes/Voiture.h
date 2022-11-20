#ifndef VOITURE_H
#define VOITURE_H
#include <string.h>
#include "Modele.h"
#include "Option.h"



class Voiture{
	private:
		string Name;
		Modele modele;
		Option*options[5];


	public:
		Voiture();
		Voiture(string Name, const Modele& modele);
		Voiture(const Voiture& V);

		//operateurs =/+/-/

		Voiture& operator=(const Voiture& V);
		friend Voiture operator+(const Voiture & v,const Option & op);

		friend Voiture operator+(const Option & op,const Voiture & ov);

		friend Voiture operator-(const Voiture & v,const Option & op);

		friend Voiture operator-  (const Voiture & v,string op);

		//operateurs de comparaison

		int operator< (const Voiture& V);

	    int operator> (const Voiture& V);

	    int operator== (const Voiture& V);
	    // operateurs d'insertion 
	    friend ostream& operator<<(ostream& out,const Voiture& V);
	    //operateur []
	    Option * operator[](int i);

		~Voiture();
		void Affiche() const;
		void setModele(const Modele&);
		void setName(string);

		Modele getModele()const;
		string getName()const; 

		void AjouteOption(const Option& option);
		
		void RetireOption(string code);
		float getPrix()const;
};
#endif
