/*
 ============================================================================
 Name        : P1E5.c
 Author      : Federico Scheytt
 Version     : 01/04/2022
 Description : Terminado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void importe_compra(float kilo, float precio_kilo, float* importe, float* importe_desc){
	*importe = kilo * precio_kilo;
	if (*importe>100) {
		*importe_desc = *importe - *importe*0.1;
	} else {
		*importe_desc = 0;
	}
}

int main(void) {

	setbuf(stdout, 0);

	float kilos;
	float precio_kilo;
	float importe;
	float importe_desc;

	printf("Ingrese la cantidad de kilos adquiridos: ");
	scanf("%f\n", &kilos);
	printf("Ingrese el precio por kilo: ");
	scanf("%f\n", &precio_kilo);

	importe_compra(kilos, precio_kilo, &importe, &importe_desc);

	if(importe_desc == 0){
		printf("El importe es: $%.2f \n", importe);
	} else {
		printf("El importe con descuento es: $%.2f \n", importe_desc);
	}

	return EXIT_SUCCESS;
}
