/*
 ============================================================================
 Name        : P1E3.c
 Author      : Federico Scheytt
 Version     : 01/04/2022
 Description : Terminado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	setbuf(stdout, 0);

	float reales[100];
	int i;
	int n;

	printf("Ingrese el numero de valores reales a almacenar: \n");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		printf("Ingreseel valor %d: \n", i+1);
		scanf(" %f", &reales[i]);
	}

	printf("Los valores en orden inverso es: \n");
	for(i=n; i>0; i--){
		printf(" %f\n", *(reales+i-1));
	}

	return EXIT_SUCCESS;
}
