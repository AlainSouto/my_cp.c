#include <stdio.h>  //Trabajo de:Suhar Aristegui, Iker Vicente y Alain Souto
#include <stdlib.h>
#include <string.h>

void copiar(const char *archivo_a_abrir,const char *archivo_a_copiar){
    FILE *archivoCopy, *archivoPaste;
    if(archivo_a_abrir!=NULL){
       archivoCopy=fopen(archivo_a_abrir, "rb");
       archivoPaste=fopen(archivo_a_copiar, "wb");
         if(archivoCopy==NULL){
            perror("Hubo un error en la apertura del archivo");
               exit(EXIT_FAILURE);
         }
    }
    const int tamBuffer = 4096;
    char buffer[tamBuffer];
    while(fgets(buffer, tamBuffer, archivoCopy)!=NULL){
	      fputs(buffer, archivoPaste);
   }
   fclose(archivoCopy);
   fclose(archivoPaste);
}


int main(int argc, char *argv[]){
   char *dir_o_arch;
	if(argc!=3){
		perror("Se deben introducir dos archivos/un archivo y un directorio");
		exit(EXIT_FAILURE);
	}
   dir_o_arch=argv[2];
   if(dir_o_arch[strlen(dir_o_arch)-1]=="/"){
      //dir_o_arch+argv[1]
      
		copiar(argv[1], argv[2]);
	}
   else{
      sprintf('dir_o_arch/')
   }
	return 0;
}
