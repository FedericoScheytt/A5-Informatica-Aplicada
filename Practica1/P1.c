/*
 ============================================================================
 Name        : P1.c
 Author      : Federico Scheytt
 Version     : 04/05/2022
 ============================================================================
 */

#include "P1.h"

double **crea_matriz(int n, int m){
	int i;
	double **M;

	M = (double**) malloc(n*sizeof(double*));
	if (M == NULL){
		return M;
	}

	for( i=0; i<m; i++ ){
		M[i] = malloc(sizeof(double));
		if (M[i] == NULL){
			free(M);
			M = NULL;
		}
	}
	return M;
}

void llena_matriz(int n, int m, double **M){
	int i, j;
	double valor;

	for( i=0; i<n; i++ ){
		for( j=0; j<m; j++ ){
			printf("Valor [%d][%d]: ", i, j);
			scanf( "%lf", &valor);
			M[i][j] = valor;
		}
	}
	return;
}

void llena_matriz_rand(const int n, const int m, double **M){
	srand(time(NULL));
	int i, j;

	for( i=0; i<n; i++ ){
		for( j=0; j<m; j++ ){
			M[i][j] = rand() % 50;
		}
	}
	return;
}

void imprime_matriz(int n, int m, double **M){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf(" %.1f ", M[i][j]);
		}
		printf("\n");
	}
}

float **crea_matriz_ident(const int n){
	float **M = (float**) malloc(n*sizeof(float*));
	for (int i = 0; i < n; ++i) {
		M[i] = (float*) malloc(n*sizeof(float));
		for (int j = 0; j < n; ++j) {
				M[i][j] = 0.0;
		}
		M[i][i] = 1.0;
	}
	return M;
}

int determinante(int n, double **M){
	switch(n){
		case 1:
			return M[0][0];
		case 2:
			return (M[0][0]*M[1][1] - M[0][1]*M[1][0]);
		case 3:
			return ((M[0][0]*M[1][1]*M[2][2] + M[0][1]*M[1][2]*M[2][0] + M[0][2]*M[1][0]*M[2][1]) - (M[2][0]*M[1][1]*M[0][2] + M[2][1]*M[1][2]*M[0][0] + M[2][2]*M[1][0]*M[0][1]));
		default:
			printf("Algoritmo no valido para matrices de dimension mayor a tres\n");
			return -1;
	}
}

double **producto_escalar_matriz(int n, int m, int e, double **M){
	for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				M[i][j] = e*M[i][j];
			}
		}
	return M;
}
