/*Application 1*/
#include <iostream>
#include <stdlib.h>
#include "Hash.h"
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

using namespace std;



char MyFile[11]="MyFile.txt";
char cle[20];
char valeur[40];
int choice;
char x;
int a;
int main()
{
    menustart:
	
	cout<<"\nBienvenue sur le tp fichiers non bufferises"<<endl;
	cout<<"\n\n1-->Ajouter \n "<<endl;
	cout<<"2-->Supprimer\n"<<endl;
	cout<<"3-->Rechercher\n"<<endl;
	cout<<"4-->Modifier\n"<<endl;
    cout<<"5-->Lister\n\n"<<endl;
    cout<<"6-->Sortez!!!!!!!"<<endl;
	cout << "Entrez votre choix ? : "<<endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        
         do{
            cout<<"Entrez La clé: ";
            cin>>cle;
            cout<<"Entrez La valeur: ";
            cin>>valeur;
            ajout(MyFile,cle,valeur);
            cout << "\n\tAjouter un autre ? (O,N): ";
            cin >> x;
        } while (x == 'o' || x == 'O');
        break;
    case 2:
        cout<<"Entrez la cle de la valeur à Supprimer  ";
        cin>>cle;

        if(suppression(MyFile,cle))cout<<"yes"<<endl;
        else{perror("");}
       
        break;
    case 3:
        cout<<"Entrez la cle de la valeur à trouver: ";
        cin>>cle;
        if(recherche(MyFile,cle,valeur))
            cout<<"valeur trouver : "<<valeur<<endl;
        else{perror("valeur non trouver");}
        break;
    case 4:
        cout<<"Entrez la cle de la valeur à modifier: ";
        cin>>cle;
        cout<<"\nEntrez la valeur à modifier: ";
        cin>>valeur;
        cout<<"Avant"<<endl;
        a = modification(MyFile,cle,valeur);
        if(a==1) cout<<"boom";
        cout<<"Apres"<<endl;
        //else{}
         
        
        break;
        
    case 5:
        cout<<"CLE\t\tvaleur "<<"VALIDE"<<endl;
        if (liste(MyFile)==-1)perror("");
        break;
    case 6:
        exit(0);
    default:
        cout << "\n\t\t\t le choix n est pas valable";
        break;
	return 0;
   
}
 goto menustart;
}