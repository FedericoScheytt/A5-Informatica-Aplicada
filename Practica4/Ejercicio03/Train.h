/*
 * Train.h
 *
 *  Created on: 20 may. 2022
 *      Author: feder
 */

#ifndef TRAIN_H_
#define TRAIN_H_

#include "Carriage.h"

class Train {
	Carriage *carriage;
	int numPri;
	int numSeg;
	char *destino;
	char *salida;
	int precioPri;
	int precioSeg;
public:
	Train();
	Train(int nP, int nS, char *sal, char *des, int pP, int pS);
	void llenar();
	int totalVentas();

	virtual ~Train();
};

#endif /* TRAIN_H_ */
