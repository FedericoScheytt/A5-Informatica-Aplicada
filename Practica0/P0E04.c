/*
 ============================================================================
 Name        : P0E4.c
 Author      : Federico Scheytt
 Version     : 27/03/2022
 Description : Calcular la traza, traspuesta y producto matricial de matrices cuadradas
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define N 2

void imprimeMatriz(float A[N][N]){
	int i;
	int j;

	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf(" %.1f", A[i][j]);
		}
		printf("\n");
	}
}

void traza(float A[N][N]){
	int i;
	float trazaA;

	trazaA = 0;

	for(i=0; i<N; i++){
		trazaA += A[i][i];
	}
	printf("La traza de la matriz es: %.1f\n", trazaA);
	printf("----------------------------\n");
}

void traspuesta(float A[N][N]){
	int i;
	int j;
	float traspuestaA[N][N];

	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			traspuestaA[i][j] = A[j][i];
		}
	}
	printf("La traspuesta de A es: \n");
	imprimeMatriz(traspuestaA);
	printf("---------------------------\n");
}

void producto(float A[N][N], float B[N][N]){

	// 	AxB			b11 				b12
	// 				b21					b22
	// 	a11 a12 	a11xb11 + a12xb21	a11xb12 + a12xb22
	//	a21 a22 	a21xb11 + a22xb21	a21xb12 + a22xb22

	int i;
	int j;
	int k;
	float suma;
	float productoAB[N][N];

	for(i=0; i<N; i++){
			for(j=0; j<N; j++){
				suma = 0;
				for(k=0; k<N; k++){
					suma += A[j][k] * B[k][i];
				}
				productoAB[j][i] = suma;
			}
		}
	printf("El producto entre A y B es: \n");
	imprimeMatriz(productoAB);
}

int main(void) {

	setbuf(stdout, 0);

	float A[N][N] = {{1, 2}, {3, 4}};
	float B[N][N] = {{5, 6}, {7, 8}};

	printf("La matriz A es: \n");
	imprimeMatriz(A);
	printf("----------------------------\n");
	printf("La matriz B es: \n");
	imprimeMatriz(B);
	printf("----------------------------\n");

	traza(A);
	traspuesta(A);
	producto(A,B);

	return EXIT_SUCCESS;
}
