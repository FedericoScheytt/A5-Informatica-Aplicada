/*
 ============================================================================
 Name        : P1E1.c
 Author      : Federico Scheytt
 Version     : 01/04/2022
 Description : Terminado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i = 8;
	int *pi=&i;
	long long l = 8, *pl=&l;
	float f = 102.8f, *pf=&f;
	double d=678.44, *pd=&d;
	int vec[100];
	vec[0] = 44;
	char c = 'a', *pc=&c;

	printf("variable int, tam.bytes: %d \tdir.&i: %p \tvalor: %d\n", sizeof(i), &i, i);
	printf("puntero int, tam.bytes= %d \tdir.&pi: %p \tvalor: %p\n", sizeof(pi), &pi, pi);
	printf("variable long, tam.bytes: %d \tdir.&l: %p \tvalor: %I64d\n", sizeof(l), &l, l);
	printf("puntero long, tam.bytes: %d \tdir.&pl: %p \tvalor: %p\n", sizeof(pl), &pl, pl);
	printf("variable float, tam.bytes: %d \tdir.&f: %p \tvalor: %.1f\n", sizeof(f), &f, f);
	printf("puntero float, tam.bytes: %d \tdir.&pf: %p \tvalor: %p\n", sizeof(pf), &pf, pf);
	printf("variable double, tam.bytes: %d \tdir.&d: %p \tvalor: %.2lf\n", sizeof(d), &d, d);
	printf("puntero double, tam.bytes: %d \tdir.&pd: %p \tvalor: %p\n", sizeof(pd), &pd, pd);
	printf("variable array, tam.bytes: %d \tdir.&vec[0]: %p \tvalor: %d\n", sizeof(vec[0]), &vec[0], vec[0]);
	printf("puntero array, tam.bytes: %d \tdir.&vec: %p \tvalor: %p\n", sizeof(vec), &vec, vec);
	printf("variable char, tam.bytes: %d \tdir.&vec: %p \tvalor: %c\n", sizeof(c), &pc, c);

	return EXIT_SUCCESS;
}
