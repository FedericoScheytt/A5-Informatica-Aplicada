/*
 * Tren.h
 *
 *  Created on: 27 may. 2022
 *      Author: LABDSI-01
 */

#ifndef TREN_H_
#define TREN_H_

#include "Vagon.h"

class Tren {
private:
	Vagon **vagones;
	int ind;
	int nMaxVag;
public:
	Tren();
	Tren(int n);
	bool agregarVagon(Vagon *v);
	void mostrar();
	double volumenTotal();
	virtual ~Tren();
};

#endif /* TREN_H_ */
