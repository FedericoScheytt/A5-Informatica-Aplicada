/*
 ============================================================================
 Name        : P0E12.c
 Author      : Federico Scheytt
 Version     : 28/03/2022
 Description : Generar una función unsigned setbits(unsigned x, int p, int n, unsigned y)
 	 	 	   que regresa x con los n bits que principian en la posición p iguales a los
 	 	 	   n bits más a la derecha de y, dejando los otros bits sin cambio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_binary(int number){
	if (number) {
		print_binary(number >> 1);
		putc((number & 1) ? '1' : '0', stdout);
	}
}

unsigned setbits(unsigned short int x, int p, int n, unsigned int y){
	/*
	 *   p = 5, y = 10, n = 2
	 *
	 *                n       p                   y       n
	 * 	 |x00|x01|x02|x03|x04|x05|x06|x07|x08|x09|x10|x11|x12|x13|x14|x15|
	 *  &
	 * 	 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 0 | 0 | 0 | 0 | mascara 1
	 *   -----------------------------------------------------------------
	 * 	 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |x10|x11| 0 | 0 | 0 | 0 |
	 * 	<< (y-p)+n
	 * 	 | 0 | 0 | 0 |x10|x11| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
	 *
	 * 	 mascara 1
	 * 	 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 1 |
	 *	^
	 *	 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 |
	 *	 -----------------------------------------------------------------
	 * 	 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 0 | 0 | 0 | 0 |
	 *
	 *
	 * 	 |x00|x01|x02|x03|x04|x05|x06|x07|x08|x09|x10|x11|x12|x13|x14|x15|
	 *  &
	 * 	 | 1 | 1 | 1 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | mascara 2
	 *   -----------------------------------------------------------------
	 * 	 |x00|x01|x02| 0 | 0 |x05|x06|x07|x08|x09|x10|x11|x12|x13|x14|x15|
	 *
	 * 	 mascara 2
	 * 	 | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |
	 *	^
	 *	 | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |
	 *	 -----------------------------------------------------------------
	 * 	 | 0 | 0 | 0 | 1 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
	 * 	~
	 * 	 | 0 | 0 | 0 | 1 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
	 * 	 -----------------------------------------------------------------
	 * 	 | 1 | 1 | 1 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |
	 *
	 *
	 *   | 0 | 0 | 0 |x10|x11| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
	 *  |
	 *	 |x00|x01|x02| 0 | 0 |x05|x06|x07|x08|x09|x10|x11|x12|x13|x14|x15|
	 *	  -----------------------------------------------------------------
	 * 	 |x00|x01|x02|x10|x11|x05|x06|x07|x08|x09|x10|x11|x12|x13|x14|x15|
	 *
	 */

	int mascara1 = (0xffff >> y)^(0xffff >> (y+n));
	int mascara2 = ~((0xffff >> p)^(0xffff >> (p-n)));

	return x = (x & (mascara1))<<((y-p)+n) | (x & (mascara2));

}

int main(void) {

	setbuf(stdout, 0);

	int p = 5;
	int n = 2;
	int y = 10;
	unsigned short int x = 0xff00;
	unsigned short int xSet = setbits(x, p, n, y);

	printf("El byte original es: \n");
	print_binary(x);
	printf("\nEl byte seteado es: \n");
	print_binary(xSet);

	return EXIT_SUCCESS;
}
