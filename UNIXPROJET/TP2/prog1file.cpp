#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<cstdlib>
#include<time.h>


int main(){
    srand ((unsigned) time(NULL));
	char random_letter;
	FILE* file;
	file = fopen("/home/student/Bureau/TPUNIX/TP2/fichier1/1file.txt","w+");
        
    for (int c=0; c<10000;c++){
        random_letter = 'A' + (rand() % 26);
        fwrite(&random_letter,sizeof(char),1,file);
    }
    _Exit(1);
    fclose(file);
    
}
