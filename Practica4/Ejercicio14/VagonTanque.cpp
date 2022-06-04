/*
 * VagonTanque.cpp
 *
 *  Created on: 27 may. 2022
 *      Author: LABDSI-01
 */

#include "VagonTanque.h"

VagonTanque::VagonTanque():Vagon(1){
	radio = 1;
}

VagonTanque::VagonTanque(double r, double l):Vagon(l){
	radio = r;
}

double VagonTanque::getRadio(){
	return radio;
}

void VagonTanque::setRadio(double r){
	radio = r;
}

double VagonTanque::volumen(){
	return PI * pow(radio,2) * getLongitud();
}

void VagonTanque::mostrar(){
	Vagon::mostrar();
	cout << " y un radio de " << radio << " m." << endl;
}

VagonTanque::~VagonTanque() {
	// TODO Auto-generated destructor stub
}

