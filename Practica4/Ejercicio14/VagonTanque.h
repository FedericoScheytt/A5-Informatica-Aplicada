/*
 * VagonTanque.h
 *
 *  Created on: 27 may. 2022
 *      Author: LABDSI-01
 */

#ifndef VAGONTANQUE_H_
#define VAGONTANQUE_H_

#include <iostream>
using namespace std;
#include "math.h"
#define PI 3.1415

#include "Vagon.h"

class VagonTanque: public Vagon {
private:
	float radio;
public:
	VagonTanque();
	VagonTanque(double r, double l);
	double getRadio();
	void setRadio(double r);
	virtual double volumen();
	virtual void mostrar();
	virtual ~VagonTanque();
};

#endif /* VAGONTANQUE_H_ */
