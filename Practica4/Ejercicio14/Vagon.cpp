/*
 * Vagon.cpp
 *
 *  Created on: 27 may. 2022
 *      Author: LABDSI-01
 */

#include "Vagon.h"

Vagon::Vagon() {
	longitud = 1;
}

Vagon::Vagon(double l){
	longitud = l;
}

double Vagon::volumen(){
	return 0;
}

double Vagon::getLongitud(){
	return longitud;
}

void Vagon::setLongitud(double l){
	longitud = l;
}

void Vagon::mostrar(){
	cout << "El vagon tiene una longitud de " << longitud << " m";
}

Vagon::~Vagon() {

}

