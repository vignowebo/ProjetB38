#ifndef CLIENT_H
#define CLIENT_H
#include <string.h>
#include "Modele.h"
#include "Option.h"
#include "Intervenant.h"


class Client:public Intervenant  {
	private:
		string Gsm;


	public:
		Client();
		Client(string Nom,string Prenom,int Num,string gs);
		Client(const Client& C);

		//operateurs =

		Client& operator=(const Client& C);
		string Tuple()const;
		string ToString()const; 
	    // operateurs d'insertion 
	    friend ostream& operator<<(ostream& out,const Client& C);
	   

		~Client();
		void Affiche() const;
		void setGsm(string g);
	
		string getGsm()const;
		

};
#endif
