/*
 ============================================================================
 Name        : P1E7.c
 Author      : Federico Scheytt
 Version     : 27/04/2022
 Description : Terminado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cadena[63];

void representa(int entero, int base){
		itoa(entero,cadena,base);
}

int main(void){

	int entero = 52681;

	printf("La representacion del entero %d es: \n", entero);
	representa(entero,10);
	printf("Decimal:		%s\n", cadena);
	representa(entero,8);
	printf("Octal:			%s\n", cadena);
	representa(entero,16);
	printf("Hexadecimal:		%s\n", cadena);
	representa(entero,2);
	printf("Binario:		%s\n", cadena);

	return EXIT_SUCCESS;
}
