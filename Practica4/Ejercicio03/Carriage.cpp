/*
 * Carriege.cpp
 *
 *  Created on: 20 may. 2022
 *      Author: feder
 */

#include "Carriage.h"

Carriage::Carriage() {
	primera = false;
	for (int i = 0; i < 40; ++i) {
		asiento[i] = 0;
	}
}

Carriage::Carriage(bool c){
	primera = c;
	for (int i = 0; i < 40; ++i) {
		asiento[i] = 0;
	}
}

bool Carriage::getAsiento(int n){
	return asiento[n];
}

void Carriage::setAsiento(int n){
	asiento[n] = 1;
}

bool Carriage::getPrimera(){
	return primera;
}

void Carriage::setPrimera(bool c){
	primera = c;
}

void Carriage::ocupar(){
	srand(time(NULL));
	double p = primera?0.1:0.4;
	for (int i = 0; i < 40; ++i) {
		asiento[i] = ((double)rand()/RAND_MAX) < p;
	}
}


Carriage::~Carriage() {
	// TODO Auto-generated destructor stub
}



