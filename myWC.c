/*
Programa que cuenta las lineas, palabras y caracteres de un fichero. 
 */
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
  
  while(!feof(f)){
    caracter = fgetc(f);
    if(isspace(caracter) !=0||(caracter == saltoLinea)){
	pcont ++;
      }
    if(isspace(caracter) == 0){
      ccont ++;
      
    }
    if(caracter == saltoLinea){
      lcont ++;
    }
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
