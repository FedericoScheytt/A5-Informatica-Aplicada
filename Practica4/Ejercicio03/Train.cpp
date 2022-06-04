/*
 * Train.cpp
 *
 *  Created on: 20 may. 2022
 *      Author: feder
 */

#include "Train.h"

Train::Train() {
}

Train::Train(int nP, int nS, char *sal, char *des, int pP, int pS){
	numPri = nP;
	numSeg = nS;
	carriage = new Carriage[nP + nS];
	for (int i = 0; i < (nP+nS); ++i) {
		carriage[i].setPrimera(i<nP);
	}
	salida = new char[strlen(sal)+1];
	strncpy(salida, sal, strlen(sal)+1);
	destino = new char[strlen(des)+1];
	strncpy(destino, des, strlen(des)+1);
	precioPri = pP;
	precioSeg = pS;
}

void Train::llenar(){
	for (int i = 0; i < numPri+numSeg; ++i) {
		carriage[i].ocupar();
	}
}

int Train::totalVentas(){
	int n=0;
	for (int i = 0; i < numPri+numSeg; ++i) {
		for (int j = 0; j < 40; ++j) {
			carriage[i].getAsiento(j)?n++:0;
		}
	}
	return n;
}


Train::~Train() {
	delete [] carriage;
	delete destino;
	delete salida;
}

