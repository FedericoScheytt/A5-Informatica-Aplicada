/*
 * Tren.cpp
 *
 *  Created on: 27 may. 2022
 *      Author: LABDSI-01
 */

#include "Tren.h"
#define CANT_MAX_VAG 20

Tren::Tren() {
}

Tren::Tren(int n) {
	if (n>CANT_MAX_VAG) {
		nMaxVag = CANT_MAX_VAG;
	} else {
		nMaxVag = n;
	}
	vagones = new Vagon*[nMaxVag];
	ind = 0;
}

bool Tren::agregarVagon(Vagon *v){
	bool dev = false;
	if (ind < nMaxVag) {
		vagones[ind] = v;
		ind++;
		dev = true;
	}
	return dev;
}

double Tren::volumenTotal(){
	double total = 0;
	for (int i = 0; i < ind; i++) {
		total += vagones[i]->volumen();
	}
	return total;
}

Tren::~Tren() {
	delete[] vagones;
}

