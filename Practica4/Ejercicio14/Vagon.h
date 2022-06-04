/*
 * Vagon.h
 *
 *  Created on: 27 may. 2022
 *      Author: LABDSI-01
 */

#ifndef VAGON_H_
#define VAGON_H_

#include <iostream>
using namespace std;

class Vagon {
private:
	double longitud;
public:
	Vagon();
	Vagon(double l);
	virtual double volumen();
	double getLongitud();
	void setLongitud(double l);
	virtual void mostrar();
	virtual ~Vagon();
};

#endif /* VAGON_H_ */
