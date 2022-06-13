/**
 * @file TP2Lib.cpp
 * @author Grupo N3
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "TP2Lib.h"

int numbEvents(){
    int n;
	cout << "Ingrese la cantidad de eventos aleatorios para la nueva simulacion: ";
	cin >> n;
	return n;
}

void printTitle(){
    cout << "Comienzo nueva simulacion: " << endl;
	cout << "| n | Button | End | ENA1 | ENA2 | Reset | Event        |" << endl;
}

void printEvent(int i, int b, int e, int ena1, int ena2, int r, int* t, int* s){
    cout << "| " << i << " | ";
    cout << b <<  "      | " << e << "   | ";
    cout << ena1 << "    | " << ena2 << "    | ";

    if(r){
        cout << "1     | ";
    } else {
        cout << "0     | ";
    }

    if(*t == *s){
		cout << "No relevante |" << endl;
	} else {
		cout << "Relevante    |" << endl;
		*t = *s;
	}

}

bool wantToContinue(){
    char c;
	cout << "Desea generar una nueva simulacion? [S/N]: ";
	cin >> c;
	return((c=='s'|| c=='S')?1:0);
}