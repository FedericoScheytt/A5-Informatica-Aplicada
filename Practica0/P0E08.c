/*
 ============================================================================
 Name        : P0E8.c
 Author      : Scheytt Federico
 Version     : 25/03/2022
 Description : Escribir una macro que determine el menor de n números pasados como argumento.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * IF INLINE
 * <condition> ? <true value> : <false value>
 * if <condition> {
 * 		<true value>
 * else
 * 		<false value>
 * 	}
 */

#define MINIMO2(a,b) 	((a)<(b))?a:b
#define MINIMO3(a,b,c)	((a)<(MINIMO2(b,c)))?a:MINIMO2(b,c)

int main(void) {
	printf("El minimo es: %d\n", MINIMO2(0,1));
	printf("El minimo es: %d\n", MINIMO3(1,2,3));

	return EXIT_SUCCESS;
}
