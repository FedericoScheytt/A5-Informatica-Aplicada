/*
 ============================================================================
 Name        : P1E5.c
 Author      : Federico Scheytt
 Version     : 29/04/2022
 Description : Terminado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
	short fil;
	short col;
	int** matriz;
}Matriz;

void alojaMatriz(Matriz* miMatriz, int fil, int col){
	miMatriz->fil = fil;
	miMatriz->col = col;
	miMatriz->matriz = (int**)malloc(fil * sizeof(int*));
	for (int i = 0; i < miMatriz->col; ++i) {
		 miMatriz->matriz[i] = (int*) calloc(col, sizeof(int));
	}
}

void llenaMatriz(Matriz* miMatriz){
	for (int i = 0; i < miMatriz->fil; ++i) {
		for (int j = 0; j < miMatriz->col; ++j) {
			miMatriz->matriz[i][j] = rand() % 50;
		}
	}
}

void imprimeMatriz(Matriz* miMatriz){
	printf("Los valores que contiene la matriz son: \n");
	for (int i = 0; i < miMatriz->fil; ++i) {
		for (int j = 0; j < miMatriz->col; ++j) {
			printf("%2d ",miMatriz->matriz[i][j]);
		}
		printf(" \n");
	}
	printf("\n");
}

Matriz* sumaMatriz(Matriz* A, Matriz* B){
	Matriz* S = (Matriz*)malloc(sizeof(Matriz));
	alojaMatriz(S, A->fil, A->col);
	for (int i = 0; i < A->fil; ++i) {
		for (int j = 0; j < A->col; ++j) {
			S->matriz[i][j] += A->matriz[i][j] + B->matriz[i][j];
		}
	}
	return S;
}

void liberaMatriz(Matriz* miMatriz){
	for (int i = 0; i < miMatriz->col; ++i) {
		free(miMatriz->matriz[i]);
	}
	free(miMatriz->matriz);
}

int main(void){
	srand(time(NULL));
	Matriz *A = (Matriz*)malloc(sizeof(Matriz));
	Matriz *B = (Matriz*)malloc(sizeof(Matriz));
	Matriz *S;

	alojaMatriz(A,2,2);
	llenaMatriz(A);
	imprimeMatriz(A);

	alojaMatriz(B,2,2);
	llenaMatriz(B);
	imprimeMatriz(B);

	S = sumaMatriz(A,B);
	imprimeMatriz(S);

	liberaMatriz(A);
	liberaMatriz(B);
	liberaMatriz(S);

	return EXIT_SUCCESS;
}
