#include <stdlib.h>
#include <stdio.h>
#include <wctype.h>

void contador(FILE *f){
  int pcont = 0;
  int ccont = 0;
  int lcont = 0;
  char espacio = ' ';
  char saltoLinea = '\n';
  char caracter;
  //char c = fgetc(f);
  //int leer[0];
  //lectura adelantada  
  // printf("esto es un cppparacter: %c,%d\n",fgetc(f),isspace(fgetc(f))); 
  //char c = fgetc(f);
  
  while(!feof(f)){
    caracter = fgetc(f);
    if(isspace(caracter) !=0||(caracter == saltoLinea)){
	pcont ++;
	//printf(" %c\n",caracter);
      }
    if(isspace(caracter) == 0){
      ccont ++;
      //printf(" %c\n",caracter);
    }
    if(caracter == saltoLinea){
      lcont ++;
      //printf(" %c\n",caracter);
    }
      // printf("---esto es un caracter: %c, %d\n",fgetc(f),isspace(fgetc(f)));   
      //if(isspace(fgetc(f)) != 0){
      //printf("esto es un caracter: %c,%d\n",fgetc(f),isspace(fgetc(f)));    
      //} 
  }

  printf(" Numero de palabras: %d\n Numero de caracteres: %d\n Numero de lineas: %d\n",pcont,ccont-1,lcont);
}

int main (int argc , char *argv[]){
 
  FILE * archivoEntrada;
  archivoEntrada = fopen(argv[1], "r");
  printf("El argumento %d es %s\n", 1, argv[1]);
  cuentaP(archivoEntrada);
  return 0;
}