#include <iostream>
#include "Hash.h"
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
using namespace std;

int ajout(const char* MyFile,const char* cle, const char* valeur){
	int MyF,ff;

	if((MyF=open(MyFile, O_RDWR |O_CREAT|O_EXCL,0707))==-1)
	{
		MyF=open(MyFile, O_RDWR);
	}

	if ((ff = lseek(MyF,0,SEEK_END)) == -1) perror("Erreur de lseek(1)");
	S_ENREG temp_file;

    memset(temp_file.cle,0,20);
    memset(temp_file.valeur,0,40);
    temp_file.valide=1;
    strcpy(temp_file.cle,cle);
    strcpy(temp_file.valeur,valeur);

	write(MyF,&temp_file,sizeof(S_ENREG));
    if(close(MyF) == -1)
    {
        return -1;
    }
    cout<<"Enregistrez avec success"<<endl;
    return 0;	

}
int suppression(const char* MyFile,const char* cle){
	int MyF,ff;

	if((MyF=open(MyFile, O_RDWR|O_EXCL,0707))==-1)
	{
		MyF=open(MyFile, O_RDWR);
	}
	S_ENREG file;
	while(read(MyF,&file,sizeof(S_ENREG))){
		if ((strcmp(file.cle,cle)==0)&&(file.valide==1)){
			file.valide=0;
			write(MyF,&file,sizeof(S_ENREG));
			return 1;
		}
	}
	if(close(MyF) == -1)
    {
        return -1;
    }
	cout<<"Supprimer avec success"<<endl;
	return 0;
}

int recherche(const char* MyFile,const char* cle, char* valeur){

	int MyF;

	if((MyF=open(MyFile, O_RDWR|O_EXCL,0707))==-1)
	{
		MyF=open(MyFile, O_RDWR);
	}
	S_ENREG file;
	while(read(MyF,&file,sizeof(S_ENREG))){
		if ((strcmp(file.cle,cle)==0)&&(file.valide==1)){
			strcpy(valeur,file.valeur);
			return 1;
		}
	}
	if(close(MyF) == -1)
    {
        return -1;
    }
	cout<<"Fichier trouver avec success"<<endl;
	if(close(MyF) == -1)
    {
        return -1;
    }
	return 0;
}

int modification(const char* MyFile,const char* cle, const char* valeur){
	int MyF;
	
	if((MyF=open(MyFile, O_RDWR|O_EXCL,0707))==-1)
	{
		MyF=open(MyFile, O_RDWR);
	}

	
	S_ENREG file;

	while(read(MyF,&file,sizeof(S_ENREG))){
		cout<<"ok"<<endl;
		if ((strcmp(file.cle,cle)==0)&&(file.valide==1)){
			strcpy(file.valeur,valeur);
			write(MyF,&file,sizeof(S_ENREG));
			return 1;
		}

	}
	if(close(MyF) == -1)
    {
        return -1;
    }
	return 0;
}
int liste(const char* MyFile){
	int MyF;
	if((MyF=open(MyFile, O_RDONLY|O_EXCL,0707))==-1)
	{
		MyF=open(MyFile, O_RDONLY);
	}
	S_ENREG file;
	while(read(MyF,&file,sizeof(S_ENREG))){
		if(file.valide==1){
			
			cout<<file.cle<<"\t\t"<<file.valeur<<" \t"<<file.valide<<endl;
		}
	}
	if(close(MyF) == -1)
    {
        return -1;
    }
	return 0;
}
