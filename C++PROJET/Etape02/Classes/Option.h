#ifndef OPTION_H
#define OPTION_H

#include "Modele.h"



class Option{
	private:
		string Code;
		string Intitule;
		float prix;

	public:
		Option();
		Option(string Code, string Intitule,float prix);
		Option(const Option& V);
		void Affiche() const;
		
		void setCode(string);
		void setIntitule(string);

		void setPrix(float);

		
		string getCode()const; 
		string getIntitule()const; 
		float  getPrix()const; 

};
#endif
