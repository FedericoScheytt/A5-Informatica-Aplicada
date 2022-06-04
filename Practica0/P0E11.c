/*
 ============================================================================
 Name        : P0E11.c
 Author      : Federico Scheytt
 Version     : 28/03/2022
 Description : Generar una función unsigned rightRot(unsigned x, int n) que rote a derecha
 	 	 	   los últimos n bits de x. Asumir que el bit menos significativo de x, ocupa
 	 	 	   la posición cero y que n siempre asume valores positivos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned rightRot(unsigned x, int n){
	int i;

	for(i=0; i<n; i++){
		if ((x & 1) == 0) // el ultimo bit es 0
			x = x >> 1;
		else {			  // el ultimo bit es 1
			x = x >> 1;
			x = x | 0x80;
		}
	}
	return x;
}

void print_binary(int number){
	if (number) {
		print_binary(number >> 1);
		putc((number & 1) ? '1' : '0', stdout);
	}
}

int main(void) {

	setbuf(stdout, 0);

	int n = 2;
	unsigned int x = 0xB7;
		// 0x indica notacion hedecimal
		// 0xB7 = 11*16^1 + 7*16^0 = 183
		// 0xB7 = 1011 0111 donde B=1011 y 7=0111
	unsigned int xRot = rightRot(x, n);

	printf("El byte original es: \n");
	print_binary(x);
	printf("\nEl byte rotado %d posiciones es: \n", n);
	print_binary(xRot);

	return EXIT_SUCCESS;
}
