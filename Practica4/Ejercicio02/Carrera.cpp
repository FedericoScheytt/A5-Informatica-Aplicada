/**
 * @file Carrera.cpp
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Carrera.h"
#include <string.h>

Carrera::Carrera(float d, char *w) {
	distance = d;
	winner = new char[strlen(w)+1];
	strncpy(winner, w, strlen(w)+1);
}

float Carrera::getDistance(){
	return distance;
}

char *Carrera::getWinner(){
	return winner;
}

Carrera::~Carrera() {
	delete winner;	
}

