/*
 * VagonCaja.cpp
 *
 *  Created on: 27 may. 2022
 *      Author: LABDSI-01
 */

#include "VagonCaja.h"

VagonCaja::VagonCaja():Vagon(1){
	alto = 1;
	ancho = 1;
}

VagonCaja::VagonCaja(double al, double an, double l):Vagon(l){
	alto = al;
	ancho = an;
}

double VagonCaja::getAlto(){
	return alto;
}

void VagonCaja::setAlto(double al){
	alto = al;
}

double VagonCaja::getAncho(){
	return ancho;
}

void VagonCaja::setAncho(double an){
	ancho = an;
}

double VagonCaja::volumen(){
	return ancho*alto*getLongitud();
}

void VagonCaja::mostrar(){
	Vagon::mostrar();
	cout << ", un alto de " << alto << " m ,y un ancho de " << ancho << " m." <<endl;
}

VagonCaja::~VagonCaja() {
}

