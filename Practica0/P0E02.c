/*
 ============================================================================
 Name        : P0E2.c
 Author      : Federico Scheytt
 Version     : 25/03/2022
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, 0);

	int valores[3];
	int valor;
	int i;
	int j;

	printf ("Ingrese 3 valores enteros: \n");
	for (i=0; i<3; i++){
		scanf(" \n %d", &valor);
		valores[i] = valor;
		printf ("El valor leido es: %d \n", valor);
	}

	printf ("Ingrese 1 valores entero a buscar dentro de los 3 ya ingresados: \n");
	while (valor != 0){
		scanf(" \n %d", &valor);
		printf ("El nuevo valor leido es: %d \n", valor);

		for (j=0; j<3; j++){
			if(valor == valores[j]){
				printf("El valor %d esta en la posicion %d de los valores ya ingresados \n", valor, j);
			} else continue;
		}
	}

	return EXIT_SUCCESS;
}
