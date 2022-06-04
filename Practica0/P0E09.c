/*
 ============================================================================
 Name        : P0E9c
 Author      : Scheytt Federico
 Version     : 25/03/2022
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define BitSet(a,b)    ((a) |=  ( 1<<(b) ))	// Pone a 1 el bit 'b' del número a
#define BitClear(a,b)  ((a) &= ~( 1<<(b) ))	// Pone a 0 el bit 'b' del número a
#define BitCheck(a,b)  ((a) &=  ( 1<<(b) ))	// Verifica si el bit 'b' del número a es un 0 o un 1
#define BitToggle(a,b) ((a) ^=  ( 1<<(b) ))	// Cambia el bit 'b' del número a por su valor complementario si el bit es 0 lo pone a 1 y si es 1 lo pone a 0

void print_binary(int number){
	if (number) {
		print_binary(number >> 1);
		putc((number & 1) ? '1' : '0', stdout);
	}
}

int main(void) {

	// Terminar

	int number = 25;

	print_binary(number);

	return EXIT_SUCCESS;
}
