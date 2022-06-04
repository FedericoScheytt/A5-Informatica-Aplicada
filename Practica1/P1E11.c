/*
 ============================================================================
 Name        : P1E10.c
 Author      : Federico Scheytt
 Version     : 04/05/2022
 Description : Casi terminado, ver error de impresion de matrices!
 ============================================================================
 */

#include "P1.h"


int main(){

	setbuf(stdout, 0);

	double **M;
	int n, m, e;

	printf("Ingrese las filas de M: ");
	scanf("%d", &n);
	printf("Ingrese las columnas de M: ");
	scanf("%d", &m);
	printf("Ingrese el escalar: ");
	scanf("%d", &e);

	M = crea_matriz(n, m);
	llena_matriz_rand(n, m, M);
	printf("La matriz original es: \n");
	imprime_matriz(n, m, M);
	producto_escalar_matriz(n, m, e, M);
	printf("La matriz multiplicada por %d es: \n", e);
	imprime_matriz(n, m, M);

	return EXIT_SUCCESS;
}


