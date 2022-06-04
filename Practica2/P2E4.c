/*
 ============================================================================
 Name        : P1E1.c
 Author      : Federico Scheytt
 Version     : 22/04/2022
 Description :
 ============================================================================
 */

// terminar ejercicio
// mejoras:
// nombre *char
// levantar los datos desde un archivo de texto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct TipoPunto{
	double abscisa;		// eje x
	double ordenada;};	// eje y

struct TipoCiudad{
	struct TipoPunto situacion;
	char nombre[50];
};

double Distancia(struct TipoCiudad ciudades[], const char nombre_ciudad, int num_ciudad){

	double x1 = ciudades[num_ciudad].situacion.abscisa;
	double y1 = ciudades[num_ciudad].situacion.ordenada;
	double x2 = ciudades[num_ciudad].situacion.abscisa;
	double y2 = ciudades[num_ciudad].situacion.ordenada;

	return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}

void Reordenar(struct TipoCiudad ciudades[], int num_ciudades, const char nombre_ciudad_referencia[]){


//	for (int i = 0; i < num_ciudades; i++) {
//		if(strcmp(ciudades[i].nombre, nombre_ciudad_referencia) == 0){
//			struct TipoCiuadad aux = ciudades[0];
//			ciudades[0] = ciudades[i];
//			ciudades[i] = aux;
//		}
//	}
}

int main(void){

	setbuf(stdout, 0);

	struct TipoCiudad ciudades[4];

	strcpy(ciudades[0].nombre, "Rosario");
	ciudades[0].situacion.abscisa = -32.9575;
	ciudades[0].situacion.ordenada = -60.639444;

	strcpy(ciudades[1].nombre, "Cordoba");
	ciudades[1].situacion.abscisa = -31.416667;
	ciudades[1].situacion.ordenada = -64.183333;

	strcpy(ciudades[2].nombre, "Buenos Aires");
	ciudades[2].situacion.abscisa = -34.599722;
	ciudades[2].situacion.ordenada = -58.381944;

	strcpy(ciudades[3].nombre, "Parana");
	ciudades[3].situacion.abscisa = -31.744444;
	ciudades[3].situacion.ordenada = -60.5175;

	int num_ciudades = 4;
	int num_ciudad_ref;

	printf("Ingrese el numero de ciudad que desea tomar como referencia: \n");
	for (int i = 0; i < num_ciudades; i++) {
		printf("%d  %s\n",i ,ciudades[i].nombre);
	}
	scanf("%d", &num_ciudad_ref);

	Reordenar(ciudades, num_ciudades, ciudades[num_ciudad_ref].nombre);

	return EXIT_SUCCESS;
}
