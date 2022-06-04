/*
 ============================================================================
 Name        : P0E6.c
 Author      : Federico Scheytt
 Version     : 27/03/2022
 Description : Escriba un programa para ver las longitudes y valores máximos y mínimos en bytes de
 	 	 	   los tipos básicos de programación en C en su máquina
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void){
	char a;
	short int b;
	int c;
	long int d;
	unsigned char e;
	unsigned short int f;
	unsigned int g;
	unsigned long int h;
	float i;
	double j;
	long double k;

	printf ("La longitud de cada uno de los tipos basicos es:\n");
		printf("char .................. %d\n",sizeof(a));
		printf("short int ............. %d\n",sizeof(b));
		printf("int ................... %d\n",sizeof(c));
		printf("long int .............. %d\n",sizeof(d));
		printf("unsigned char ......... %d\n",sizeof(e));
		printf("unsigned short int .... %d\n",sizeof(f));
		printf("unsigned int .......... %d\n",sizeof(g));
		printf("unsigned long int ..... %d\n",sizeof(h));
		printf("float ................. %d\n",sizeof(i));
		printf("double ................ %d\n",sizeof(j));
		printf("long double ........... %d\n",sizeof(k));

	printf("Los valores minimos y maximos de cada uno de los tipos son:\n");
		printf ("Minimo y maximo de char .......... %d  %d\n", CHAR_MIN, CHAR_MAX);
		printf ("Minimo y maximo de short int ..... %d  %d\n", SHRT_MIN, SHRT_MAX);
		printf ("Minimo y maximo de int ........... %d  %d\n", INT_MIN, INT_MAX);
		printf ("Minimo y maximo de long int ...... %ld  %ld\n", LONG_MIN, LONG_MAX);
		printf ("Maximo de unsigned char .......... %d\n", UCHAR_MAX);
		printf ("Maximo de unsigned short int ..... %d\n", USHRT_MAX);
		printf ("Maximo de unsigned int ........... %d\n", UINT_MAX);
		printf ("Maximo de unsigned long int ...... %ld\n", ULONG_MAX);
		printf ("Minimo y maximo de float ......... %e  %e\n", FLT_MIN, FLT_MAX);
		printf ("Minimo y maximo de double ........ %e  %e\n", DBL_MIN, DBL_MAX);
		// printf ("Minimo y maximo de long double ... %e  %e\n", LDBL_MIN, LDBL_MAX);

	return EXIT_SUCCESS;
}
