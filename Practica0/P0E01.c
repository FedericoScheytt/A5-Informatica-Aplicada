/*
 ============================================================================
 Name        : P0E1.c
 Author      : Federico Scheytt
 Version     : 25/03/2022
 Description : Declaracion e intercambio de valores de variables
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 10;
	int y = 20;
	int z = 30;
	int aux;

	printf("Las variables originales son:  x = %d y = %d  z = %d\n", x, y, z);

	aux = x;
	x = y;
	y = z;
	z = aux;

	printf("Las variables modificadas son: x = %d y = %d  z = %d\n", x, y, z);

	return EXIT_SUCCESS;
}
