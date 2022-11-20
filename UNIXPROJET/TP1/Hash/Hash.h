#ifndef Hash
#define Hash

typedef struct enreg
{
	int valide;
	char cle [20];
	char valeur [40];

}S_ENREG;
int ajout(const char* MyFile,const char* cle, const char* valeur);
int suppression(const char* MyFile,const char* cle);
int recherche(const char* MyFile,const char* cle, char* valeur);
int modification(const char* MyFile,const char* cle, const char* valeur);
int liste(const char* MyFile);

#endif