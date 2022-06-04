/**
 * @file Punteros.c
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// & operador direccion o referencia: Devuelve la direccion donde se almacena el operando
// * operador indireccion o desreferencia: Devuelve el valor del objeto al que apunta

//Utilizacion de un puntero
//Declaracion:
//  variable_type *pointer_name;
//Inicializacion:
//  pointer_name = &variable

#include <stdio.h>

int main(){
    //Declaracion de variables
    int x = 1;
    int y = 2;
    int z[3] = {1,2,3};
    
    //Declaracion de variables de tipo puntero a int
    int *p;
    int *q;

    printf("La dimension de un puntero en mi SO es de: %d bytes\n", sizeof(p));

    //Asigno la direccion de memoria de x a la variable de tipo puntero a int
    p = &x;
    q = &y;

    //Desrefencio al puntero asignando a la variable y el valor almacenado en la dirrecion de memoria de x, es decir, 1
    y = *p;
    printf("La variable x vale: %d y esta almacenada en: %p\n", *p, p);
    printf("La variable y vale: %d y esta almacenada en: %p\n", *q, q);

    //Asigno a la variable x el valor 0, mediente su desreferenciacion
    *p=0;
    printf("La variable x vale: %d y esta almacenada en: %p\n", *p, p);

    //Hago que p ahora apunte a el primer elemento del arreglo z    
    p=&z[0];
    for (int i = 0; i < 3; i++) {
        printf("La variable z[%d] vale: %d y esta almacenada en %p\n", i, *(p+i), p+i);
    }
    
    //Ahora q tambien apunta a el primer elemento del arreglo z
    q=p;

    return 0;
}