#include <stdio.h>
#include <stdlib.h> //rand()...
#include <time.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h> //flags
#include <unistd.h> //write()



int main(){
    FILE* file;
    char c;
    char *buffer;
    int i,fd,rc,taille;

     char random_letter;

   srand(time(NULL)); //seed initialiser sur l'horloge interne
    if ((fd = open("/home/student/Bureau/TPUNIX/TP2/fichier1/1file.txt",O_RDONLY))
     &&(file = fopen("/home/student/Bureau/TPUNIX/TP2/fichier1/1file.txt","w+"))){ 
        perror("Le fichier n'existe pas !\n");
        return -1;
    }

   if ((rc = lseek(fd,0,SEEK_SET)) == -1){ //Positionnement au début du fichier
        perror("Erreur de lseek()\n");
        return -1;
    }

     for (int c=0; c<10000;c++){
        random_letter = 'A' + (rand() % 26);
        fwrite(&random_letter,sizeof(char),1,file);

        if ((taille = lseek(fd,0,SEEK_END)) == -1){ //Taille du fichier
            perror("Erreur de lseek()");
            exit(1);
        }
        if(taille>0){
            printf("\nTaille du fichier : %d\n",taille);
            break;
        }
    }

   if(fclose(file)){ 
        perror("Erreur de fclose\n");
    }

   if (close(fd) == -1){
        perror("Erreur de close() !\n");
        return -1;
    }



   return 0;
}

