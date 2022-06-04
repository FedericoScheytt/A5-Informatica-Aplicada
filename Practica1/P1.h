/*
 ============================================================================
 Name        : P1.h
 Author      : Federico Scheytt
 Version     : 04/05/2022
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

// Funciones relacionadas a matrices:
double **crea_matriz(const int n, const int m);
void llena_matriz(const int n, const int m, double **M );
void llena_matriz_rand(const int n, const int m, double **M);
void imprime_matriz(const int n, const int m, double **M);
float **crea_matriz_ident(const int n);
int determinante(int n, double **M);
double **producto_escalar_matriz(int n, int m, int e, double **M);

int main();
