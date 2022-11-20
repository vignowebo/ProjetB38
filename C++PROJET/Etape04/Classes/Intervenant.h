#ifndef INTERVENANT_H
#define INTERVENANT_H
#include <string.h>
#include "Modele.h"
#include "Option.h"

#include "Personne.h"

class Intervenant: public Personne{
	protected:
		int Numero;


	public:
		Intervenant();
		Intervenant(string No,string Pr ,int Numero);
		Intervenant(const Intervenant& I);
		void setNumero(int N);
		int getNumero()const; 

		Intervenant& operator=(const Intervenant& I);

		virtual~Intervenant();
		virtual string Tuple()const=0;
		virtual string ToString()const=0;


};
#endif
