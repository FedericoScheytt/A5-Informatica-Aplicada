/**
 * @file TP1.c
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "TP1Lib.h"

int main(void) {

	setbuf(stdout, 0);

	do{
		int estado = 0;
		int temp = 0;
		int n = cant_eventos();

		srand(time(NULL));

		Eventos *e = (Eventos*)malloc(sizeof(Eventos));
		Salidas *s = (Salidas*)malloc(sizeof(Salidas));
		if (e == NULL || s == NULL) {
			printf("No se pudo reservar la memoria");
			break;
		}
		inicializa_estructuras(e,s);

		printf("Comienzo nueva simulacion: \n");
		printf("| n  | s1 | s2 | c0 | c1 | re | Evento       | Velocidad |\n");

		for (int i = 0; i < n; i++) {
			genera_evento_aleatorio(e);
			evalua_evento(e,s,&estado);
			imprime(i,e,s,&temp,&estado);
		}

		free(e);
		e = NULL;
		free(s);
		s = NULL;

	}while(desea_continuar());

	return EXIT_SUCCESS;
}
