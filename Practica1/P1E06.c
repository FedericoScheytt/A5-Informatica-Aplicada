/*
 ============================================================================
 Name        : P1E6.c
 Author      : Federico Scheytt
 Version     : 08/04/2022
 Description : Terminado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum{MAYUSCULAS, MINUSCULAS} may_min;

int strLargo(const char* origen) {
	int i = 0;

	while(*(origen+i) != '\0') {
		i++;
	}

	return i;
}

int strVacio(const char* origen) {
	if(*(origen) == '\0'){
		return 0;
	} else {
		return 1;
	}
}

void strCopia(char* destino, const char* origen) {
	int largo;

	largo = strLargo(origen);
	for(int i=0; i<largo+1; i++){
		*(destino+i) = *(origen+i);
	}
}

char* reverse( char* string) {
	int largo;
	int j;

	largo = strLargo(string);
	char* reversa = (char*) malloc(largo+1);
	j = largo-1;
	for(int i=0; i<largo; i++){
		*(reversa+i) = *(string+j);
		j--;
	}
	*(reversa+largo) = '\0';

	return reversa;
}

void strIzq(char* destino, const char* origen) {
	int i = 0;
	while(*(origen+i) == ' '){
		i++;
	}
	strCopia(destino, (origen+i));
}

void strDer(char* destino, const char* origen){
	int largo = strLargo(origen);
	while(*(origen+(largo-1)) == ' '){
		largo--;
	}
	strCopia(destino, origen);
	destino[largo-1] = '\0';
}

void strAmbos(char* destino, const char* origen){
	strIzq(destino, origen);
	strDer(destino, destino);
}

void strMayMin(char* destino, const char* origen, may_min m){

	switch(m){
	case MINUSCULAS:
		while(*origen != '\0'){
			if(*origen>='A' && *origen<='Z'){
				*destino = *origen-'A'+'a';
			} else {
				*destino = *origen;
			}
			origen++;
			destino++;
		}

	case MAYUSCULAS:
		while(*origen != '\0'){
			if(*origen>='a' && *origen<='z'){
				*destino = *origen-'a'+'A';
			} else {
				*destino = *origen;
			}
			origen++;
			destino++;
		}
	}
}

int main(){

	setbuf(stdout, 0);
	char* text1 = " Sera Cierto ?? ";
	int largo = strLargo(text1)+1;
	char* result = (char*)malloc(largo);
	char* reves;
	if(result == NULL) {
		return -1;	// Sino pudo reservar memoria para result
	}
	printf("La cadena: ");
	puts(text1);
	printf("Se encuentra: %s\n",(strVacio(text1) ? "No vacia" : "Vacia"));
	printf("Largo : %d\n", strLargo(text1));
	strCopia(result,text1);
	printf("Copia : [%s]\n", result);
	reves = reverse(text1);
	printf("La cadena: [%s] invertida queda: [%s]\n", text1, reves);
	strIzq(result,text1);
	printf("Sin blancos a la Izq: [%s]\n", result);
	strDer(result,text1);
	printf("Sin blancos a la Der : [%s]\n", result);
	strAmbos(result,text1);
	printf("Ambos: [%s], sin blancos al principio ni al final.\n", result);
	strMayMin(result,text1, MAYUSCULAS);
	printf("Mayusculas : [%s]\n", result);
	strMayMin(result,text1, MINUSCULAS);
	printf("Minusculas : [%s]\n", result);

	free(result);
	result = NULL;
	free(reves);
	reves = NULL;

	return 0;
}
