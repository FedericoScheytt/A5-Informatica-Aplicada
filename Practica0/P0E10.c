/*
 ============================================================================
 Name        : P0E10.c
 Author      : Federico Scheytt
 Version     : 27/03/2022
 Description : Escribir la función paridad_par que recibe un byte y retorna un byte. El byte
 	 	 	   devuelto debe ser igual al byte recibido o, igual al byte recibido con el bit
 	 	 	   más significativo modificado, de forma tal que la configuración del byte entregado
 	 	 	   contenga un número par de unos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int es_par(int numero){
	if (numero % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int cifra_significativa(int byte[8]){
	int i;
	int cifra_significativa;

	for(i=0; i<8; i++){
		if(byte[i] == 1){
			cifra_significativa = i;
			break;
		}
	}
	return cifra_significativa;
}

void paridad_par(int byte[8]){
	int i;
	int suma;

	suma = 0;
	for(i=0; i<8; i++){
		suma += byte[i];
	}

	if(!es_par(suma)){
		byte[cifra_significativa(byte)] = 0;
	}
}

int main(void) {
	int byte[8] = {0, 1, 1, 0, 1, 1, 0, 1};
	int i;
	int j;

	printf("El byte es:\n");
	for(i=0; i<8; i++){
		printf("%d", byte[i]);
	}

	printf("\n---------------\n");
	paridad_par(byte);

	printf("El byte par es:\n");
	for(j=0; j<8; j++){
		printf("%d", byte[j]);
	}

	return EXIT_SUCCESS;
}
