/*
 ============================================================================
 Name        : P0E7.c
 Author      : Scheytt Federico
 Version     : 25/03/2022
 Description : Escribir una directiva de preprocesador para realizar cada una de las tareas.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#ifdef TRUE
	#undef TRUE
	#define TRUE 1
#else
	#define TRUE 1
#endif

//#if TRUE == 1
//	#undef TRUE
//  #define TRUE 1
//#else
//	#define TRUE 1
//#endif


int main(void) {
	if (TRUE == 1){
		printf("La etiqueta fue redefinida exitosamente");
	} else {
		printf("Algo salio mal");
	}

	return EXIT_SUCCESS;
}
