/**
 * @file P4E14.cpp
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

#include "VagonCaja.h"
#include "VagonTanque.h"
#include "Tren.h"

int main() {

	VagonCaja Vc(2,3,4);
	VagonTanque Vt(1,2);

	Vc.mostrar();
	cout << "El vagon caja tiene un volumen de: " << Vc.volumen() << " m^3." << endl;
	Vt.mostrar();
	cout << "El vagon tanque tiene un volumen de: " << Vt.volumen() << " m^3." << endl;

	Vagon *V1 = new VagonCaja(2,3,4);
	Vagon *V2 = new VagonTanque(1,2);

	Tren T(5);
	T.agregarVagon(V1);
	T.agregarVagon(V2);

	cout << "El volumen total del tren es: " << T.volumenTotal() << " m^3" << endl;

	return 0;
}