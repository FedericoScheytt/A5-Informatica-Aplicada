/*
 ============================================================================
 Name        : P1E2.c
 Author      : Federico Scheytt
 Version     : 01/04/2022
 Description : Terminado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, 0);

	int i = 5;
	int k;

	int j[] = {1,2,3,4,5,6,7,8,9,10};
	int s;

	char x = 'a';
	int t;
	char pal[] = "texto en c";

	int *pi = &i;
	printf("Por variable: 'i'    Valor: %d    Direccion:  %p \n", i, &i);
	printf("Por variable: 'pi'   Valor: %d    Direccion:  %p \n", *pi, pi);

	pi = &j[0];
	for(k=0; k<10; k++){
		printf("Por variable: 'j[%d]'   Valor: %d    Direccion:  %p \n",k , j[k], &j[k]);
	}
	for(s=0; s<10; s++){
		printf("Por variable: 'j[%d]'   Valor: %d    Direccion:  %p \n",s ,*(pi+s), pi+s);
	}

	char *pc = &x;
	printf("Por variable: 'x'   Valor: %c    Direccion:  %p \n", x, &x);
	printf("Por variable: 'x'   Valor: %c    Direccion:  %p \n", *pc, pc);

	pc = &pal[0];
	for(t=0; t<10; t++){
		printf("Por variable: 'pal[%d]'   Valor: %c    Direccion:  %p \n",t ,pal[t] , &pal[t]);
	}
	for(t=0; t<10; t++){
		printf("Por variable: 'pal[%d]'   Valor: %c    Direccion:  %p \n",t ,*(pal+t) , pal+t);
	}

	return EXIT_SUCCESS;
}
