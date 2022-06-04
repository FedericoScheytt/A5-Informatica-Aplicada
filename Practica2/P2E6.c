/*
 ============================================================================
 Name        : P1E6.c
 Author      : Federico Scheytt
 Version     : 22/04/2022
 Description : Terminar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
	unsigned char R;
	unsigned char G;
	unsigned char B;
}RGB;

typedef struct{
	int ancho;
	int alto;
	RGB **pixel;
}ImagenRGB;

typedef unsigned char Gris;

typedef struct{
	int ancho;
	int alto;
	Gris **pixel;
}ImagenGris;

ImagenRGB* creaImagenRGB(int ancho, int alto){
	ImagenRGB *miImagen = (ImagenRGB*)malloc(sizeof(ImagenRGB));
	miImagen->ancho = ancho;
	miImagen->alto = alto;
	miImagen->pixel = (RGB**)malloc(alto*sizeof(RGB*));
	for (int i = 0; i < miImagen->alto; ++i) {
		miImagen->pixel[i] = (RGB*)malloc(ancho*sizeof(RGB));
	}
	return miImagen;
}

void setPixelRGB(ImagenRGB *miImagen, int fila, int columna, RGB *pixel){

}

int main(void){
	ImagenRGB *p = creaImagenRGB(2,2);


	return EXIT_SUCCESS;
}
