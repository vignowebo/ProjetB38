#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
using namespace std;


int main()
{
	srand((unsigned) time(NULL));
	
	char random_letter;char random_name[15];

	int nbr_fichiers=10;
	char Filename[256];
	FILE *fp = NULL;
	for(int i = 0; i < nbr_fichiers; i++)
	{
	sprintf( Filename, "/home/student/Bureau/TPUNIX/TP2/fichier2/file%i.txt", i );
	fp = fopen( Filename, "w+" );
	memset( Filename, 0x00, 256 ); // On reset le nom de fichier pour pas se trouver avec 10 nom de fichiers à la suite.
	for (int c=0; c<10000;c++){
        random_letter = 'A' + (rand() % 26);
        fwrite(&random_letter,sizeof(char),1,fp);
    }
	fclose( fp );
	}
	return 0;
}

