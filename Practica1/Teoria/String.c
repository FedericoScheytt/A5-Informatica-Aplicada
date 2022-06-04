/**
 * @file String.c      
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <string.h>

int main(){
    //char texto[10]; //puedo almacenar 9 elementos, recordar el \0
    char texto[] = "Hola mundo";
    char *puntero_texto = &texto[0];

    printf("La direccion de memoria del primer elemento del array texto es: %p \n", puntero_texto);
    for (int i = 0; i < strlen(texto); i++) {
        printf("%c", texto[i]);
    }
    printf("\n");

    char *mensaje[] = {(char*)"Hola ", (char*)"soy ", (char*)"Pepe."};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < strlen(mensaje[i]); j++){
            printf("%c", mensaje[i][j]);
        }   
    }
    printf("\n");

    //Punteros a punteros
    int a = 5;
    int *p = &a;
    int **q = &p;

    printf("Accediendo a 'a' mediente variable: \n");
    printf("a = %d, &a = %p \n", a, p);
    printf("Accediendo a 'a' mediente puntero: \n");
    printf("a = %d, &a = %p \n", *p, p);
    printf("Accediendo a 'a' mediente puntero a puntero: \n");
    printf("a = %d, &a = %p , &p = %p\n", **q, p, q);

    return 0;
}