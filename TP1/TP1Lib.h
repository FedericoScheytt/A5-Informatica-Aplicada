/**
 * @file TP1Lib.h
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Estructuras
typedef struct{
	unsigned char s1:1;
	unsigned char s2:1;
}Eventos;

typedef struct{
	unsigned char c0:1;
	unsigned char c1:1;
	unsigned char requiere_ensanche:1;
}Salidas;

//Declaracion de funciones
int desea_continuar();
int cant_eventos();
void inicializa_estructuras(Eventos *e, Salidas *s);
void genera_evento_aleatorio(Eventos *e);
void evalua_evento(Eventos *e, Salidas *s, int *estado);
void imprime(int i, Eventos *e, Salidas *s, int *temp, int *estado);
