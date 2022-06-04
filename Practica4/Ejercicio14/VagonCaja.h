/*
 * VagonCaja.h
 *
 *  Created on: 27 may. 2022
 *      Author: LABDSI-01
 */

#ifndef VAGONCAJA_H_
#define VAGONCAJA_H_

#include <iostream>
using namespace std;

#include "Vagon.h"

class VagonCaja: public Vagon {
private:
	double alto;
	double ancho;
public:
	VagonCaja();
	VagonCaja(double al, double an, double l);
	double getAlto();
	void setAlto(double al);
	double getAncho();
	void setAncho(double an);
	virtual double volumen();
	virtual void mostrar();
	virtual ~VagonCaja();
};

#endif /* VAGONCAJA_H_ */
