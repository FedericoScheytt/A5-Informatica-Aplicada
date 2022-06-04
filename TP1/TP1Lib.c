/**
 * @file TP1Lib.c
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "TP1Lib.h"

//Pregunta si desea generar una nueva simulacion
int desea_continuar(){
	char c;
	printf("¿Desea generar una nueva simulacion? [S/N]: ");
	scanf("%s", &c);
	return((c=='s'|| c=='S')?1:0);
}

//Pregunta cantidad de enventos
int cant_eventos(){
	int n;
	printf("Ingrese la cantidad de eventos aleatorios para la nueva simulacion: ");
	scanf("%d", &n);
	return n;
}

//Inicializa las estructuras segun los datos del problema
void inicializa_estructuras(Eventos *e, Salidas *s){
	e->s1 = 0;
	e->s2 = 0;
	s->c0 = 1;
	s->c1 = 1;
	s->requiere_ensanche = 0;
}

//Genera eventos aleatorios
void genera_evento_aleatorio(Eventos *e){
	e->s1 = rand() % 2;
	e->s2 = rand() % 2;
}

//Evalua cada evento y asigna un valor a la salida
void evalua_evento(Eventos *e, Salidas *s, int *estado){
	if (e->s1==1 && e->s2==0 && *estado==0) {
		s->c0 = 1;
		s->c1 = 0;
		s->requiere_ensanche = 0;
		*estado = 1;
	}
	if(e->s1==0 && e->s2==0 && *estado == 1){
		s->c0 = 0;
		s->c1 = 0;
		s->requiere_ensanche = 1;
		*estado = 2;
	}
	if(e->s1==1 && e->s2==1 && (*estado == 1 || *estado == 2)){
		s->c0 = 1;
		s->c1 = 0;
		s->requiere_ensanche = 0;
		*estado = 3;
	}
	if (e->s1==0 && e->s2==0 && *estado == 3) {
		s->c0 = 1;
		s->c1 = 1;
		s->requiere_ensanche = 0;
		*estado = 0;
	}
	return;
}

//Imprime los resultados relevantes del problema
void imprime(int i, Eventos *e, Salidas *s, int *temp, int *estado){
	printf("| %d  | %d  | %d  | %d  | %d  | %d  |", i, e->s1, e->s2, s->c0, s->c1, s->requiere_ensanche);

	if(*temp == *estado){
		printf(" No relevante ");
	} else {
		printf(" Relevante    ");
		*temp = *estado;
	}

	if (s->c0==1 && s->c1==0) {
		printf("| Baja      |\n");
	} else if (s->c1==1) {
		printf("| Alta      |\n");
	} else {
		printf("| Detenida  |\n");
	}
	return;
}

