/*
 ============================================================================
 Name        : P0E5.c
 Author      : Federico Scheytt
 Version     : 27/03/2022
 Description : Dada una frase en una cadena, mostrar en pantalla cada palabra que la compone
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define N 60

void palabrasDeString(char string[N]){
	int i;

	for(i=0; i<N; i++){
		if((string[i] > 64 && string[i] < 91) || (string[i] > 96 && string[i] < 123)){
			printf("%c", string[i]);
		} else {
			printf("\n");
		}
	}
}

int main(void) {

	setbuf(stdout, 0);

	char string[N] = "FCEIA Facultad de ciencias exactas ingenieria y agrimensura";

	palabrasDeString(string);

	return EXIT_SUCCESS;
}
