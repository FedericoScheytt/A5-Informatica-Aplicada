/*
 * P4E3.cpp
 *
 *  Created on: 20 may. 2022
 *      Author: feder
 */

using namespace std;

#include "Carriage.h"
#include "Train.h"

int main(void){
	Carriage C1;
	Carriage C2(true);

	C1.ocupar();
	string q;
	int c=0;

	cout << "Para C1: " << endl;
	for (int i = 0; i < 40; ++i) {
		q = C1.getAsiento(i)?"Ocupado":"Vacio";
		cout << i << " " << q << endl;
		if(C1.getAsiento(i)){
			c++;
		}
	}
	cout << "La cantidad de asientos ocupados para C1 es:" << c << endl;
	cout << "El porcentaje de ocupacion para C1 es: " << (double)c/40 << endl;

	c=0;
	cout << "Para C2: " << endl;
	for (int i = 0; i < 40; ++i) {
		q = C1.getAsiento(i)?"Ocupado":"Vacio";
		cout << i << " " << q << endl;
		if(C1.getAsiento(i)){
			c++;
		}
	}
	cout << "La cantidad de asientos ocupados para C2 es:" << c << endl;
	cout << "El porcentaje de ocupacion para C2 es: " << (double)c/40 << endl;

	cout << "=========================================================" << endl;

	Train T1(2,2,(char*)"Rosario",(char*)"Buenos Aires",10,5);

	T1.llenar();
	cout << "El total de ventas para T1 es: " << T1.totalVentas() << endl;

	T1.~Train();

	return 0;
}
