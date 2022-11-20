#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
    srand((unsigned) time(NULL));
    char random_letter;char random_name[11+4];
    int cpt=10;
    int i;
    FILE*file;
    for (int b = 0; b < cpt; b++){
     
        for (i = 0; i < cpt; i++){
            random_letter = 'A' + ( rand () % 26) ;
            random_name [i]=random_letter ;
        }
        strcpy(random_name+i,".txt");
        file = fopen(random_name,"w+");

        for (int x = 0; x< 1000; x++){
            random_letter = 'A' + (rand() % 26);
            fwrite(&random_letter,sizeof(char),1,file); 
        }
        fclose(file);
    }
    return 0;
}