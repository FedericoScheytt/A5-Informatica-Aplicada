/**
 * @file TP2.cpp
 * @author Grupo N3
 * @version 0.2
 * @date 05-07-2022
 */

#include "Cronometer.h"

/*==========================[ funciones ]=========================*/
int numbEvents();
void printTitle();
bool wantToContinue();

/*=============================[ main ]===========================*/
int main(){

    srand(time(NULL));

    do{
        Cronometer c;
        int n = numbEvents();

        printTitle();

        for (int i = 0; i < n; i++){
            c.setRandomInput();
            c.setOutput();
            c.printEvent(i);
        }
        
    }while(wantToContinue());

    return 0;
}

/*========================[ implementacion ]======================*/
int numbEvents(){
    int n;
	cout << "Ingrese la cantidad de eventos aleatorios para la nueva simulacion: ";
	cin >> n;
	return n;
}

void printTitle(){
    cout << "Comienzo nueva simulacion: " << endl;
	cout << "|  n | Button | End | Reset | ENA1 | ENA2 | State        | Event        |" << endl;
}

bool wantToContinue(){
    char c;
	cout << "Desea generar una nueva simulacion? [S/N]: ";
	cin >> c;
	return((c=='s'|| c=='S')?1:0);
}
