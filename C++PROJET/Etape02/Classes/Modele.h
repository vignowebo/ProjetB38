#ifndef MODELE_H
#define MODELE_H

enum Moteur {Essence, Diesel, Electrique, Hybride};

class Modele{

	private:
		char *nom;
		int puissance;
		Moteur moteur;
		float prix;
	public:
		Modele();
		Modele(const char *n, int pui, Moteur mot, float pr);
		Modele(const Modele& M); 
		~Modele();

		void Affiche()const;

				/********************/
				/**********getter****/
				/********************/
		void setNom(const char*);//methodes setters
		void setMoteur(Moteur);
		void setPrix(const float);
		void setPuissance(const int);
				/********************/
				/**********getter****/
				/********************/
		const char* getNom()const;
		Moteur getMoteur()const;
		int getPuissance()const;
		float getPrix()const;


};
#endif