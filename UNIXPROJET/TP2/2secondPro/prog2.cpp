#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()

{   
    int i;
	int compteur;
    int cpt2;
	char random_letter,random_name[12];
	FILE* file;
    while(cpt2<10){
        for (i=1;i<10;i++){
              random_name[i];    
        }
    strcpy(random_name+i,".txt");
    i=0;
    file = fopen(random_name,"w+");
        while(compteur < 1000)
        {
            random_letter = 'A' + (rand() % 26);
            fwrite(&random_letter,sizeof(char),1,file);
            compteur++;
        }
        fclose(file);
        cpt2++;
        compteur=0;

    }
    
	return 0;
}
