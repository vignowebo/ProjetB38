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
		//Operateurs =/<</>>
		Option& operator=(const Option& V);
		friend ostream& operator<<(ostream& out,const Option& op);
  		friend istream& operator>>(istream& inpt,Option& op);

  		Option operator--();
  		Option operator--(int);

		void Affiche() const;
		
		void setCode(string);
		void setIntitule(string);

		void setPrix(float);

		
		string getCode()const; 
		string getIntitule()const; 
		float  getPrix()const; 

};
#endif
