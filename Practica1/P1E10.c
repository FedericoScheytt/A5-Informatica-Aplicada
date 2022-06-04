/*
 ============================================================================
 Name        : P1E10.c
 Author      : Federico Scheytt
 Version     : 04/05/2022
 Description : Casi terminado, ver error de impresion de matrices!
 ============================================================================
 */

#include "P1.h"

int pide_dimension(){
	int n;
	printf("Ingrese dimension: ");
	scanf(" %d", &n);
	return(n);
}

int main(void){

	setbuf(stdout, 0);

	double **M;
	int n = pide_dimension();

	M = crea_matriz(n, n);
	llena_matriz(n, n, M);
	printf("Para la matriz: \n");
	imprime_matriz(n, n, M);
	printf("Su determinante es: %d\n", determinante(n, M));

	return EXIT_SUCCESS;
}
