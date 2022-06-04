/**
 * @file Atleta.cpp
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Atleta.h"

Atleta::Atleta(char *na, int n, char *nac, float t) {
	name = new char[strlen(na)+1];
	strncpy(name, na, strlen(na)+1);
	number = n;
	nacionalidad = new char[strlen(nac)+1];
	strncpy(nacionalidad, nac, strlen(nac)+1);
	time = t;
}

float Atleta::getTime(){
	return time;
}

char *Atleta::getName(){
	return name;
}

Atleta::~Atleta() {
	delete name;
	delete nacionalidad;
}

