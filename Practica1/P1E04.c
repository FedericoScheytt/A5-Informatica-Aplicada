/*
 ============================================================================
 Name        : P1E4.c
 Author      : Federico Scheytt
 Version     : 01/04/2022
 Description : Terminado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char dias[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

char* dias_semana(int d){
	return (char*)(dias + d -1);
}

int main(void){

	setbuf(stdout, 0);

    int d;

	printf("Ingrese un numero de dia: \n");
	scanf("%d", &d);

	printf("El dia %d es %s", d, dias_semana(d));

	return EXIT_SUCCESS;
}
