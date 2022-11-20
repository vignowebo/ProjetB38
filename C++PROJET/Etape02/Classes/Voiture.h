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
