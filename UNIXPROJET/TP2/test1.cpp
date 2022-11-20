#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){

	int compteur=0;
	char random_letter;
	FILE* file;
	file = fopen("/home/student/Bureau/TPUNIX/TP2/fichier2/1file.txt","w+");
        while(compteur < 10000)
        {
            random_letter = 'A' + (rand() % 26);
            fwrite(&random_letter,sizeof(char),1,file);
            compteur++;
        }
        fclose(file);
        exit(1);
}
