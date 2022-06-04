/*
 ============================================================================
 Name        : P0E3.c
 Author      : Federico Scheytt
 Version     : 25/03/2022
 Description : Se ingresa por teclado la cantidad de agua caída, en milímetros día a día
 	 	 	   durante un mes. Se pide determinar el día de mayor lluvia, el de menor y
 	 	 	   el promedio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void carga(float lluvias[31], int dias) {
	int i;
	float lluvia;

	for (i=0; i<dias; i++){
		printf ("Ingrese los mm de lluvia del dia %d: \n", i+1);
		scanf(" \n %f", &lluvia);
		lluvias[i] = lluvia;
	}
}

void promedio (float lluvias[31], int dias){
	float promedio;
	float suma;
	int i;

	suma = 0;

	for (i=0; i<dias; i++){
		suma = suma + lluvias[i];
		promedio = suma/dias;
	}
	printf("El promedio de lluvias es: %.3f mm\n", promedio);
}

void max(float lluvias[31], int dias){
	float max;
	int diaMax;
	int i;

	max = lluvias[0];

	for (i=0; i<dias; i++){
		if(max < lluvias[i]){
			max = lluvias[i];
			diaMax = i+1;
		}
	}
	printf("El maximo valor de lluvia fue %.3f mm el dia %d\n", max, diaMax);
}

void min(float lluvias[31], int dias){
	float min;
	int diaMin;
	int i;

	min = lluvias[0];

	for (i=0; i<dias; i++){
		if(min > lluvias[i]){
			min = lluvias[i];
			diaMin = i+1;
		}
	}
	printf("El minimo valor de lluvia fue %.3f mm el dia %d\n", min, diaMin);
}

int main(void) {

	setbuf(stdout, 0);

	float lluvias[31];
	int dias;

	printf ("Cuantos dias tiene el mes?\n");
	scanf(" \n %d", &dias);

	carga(lluvias, dias);
	promedio(lluvias, dias);
	max(lluvias, dias);
	min(lluvias, dias);

	return EXIT_SUCCESS;
}
