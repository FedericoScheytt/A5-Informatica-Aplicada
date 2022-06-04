/*
 * Carriage.h
 *
 *  Created on: 20 may. 2022
 *      Author: feder
 */

#ifndef CARRIAGE_H_
#define CARRIAGE_H_

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

class Carriage {
private:
	bool asiento[40];
	bool primera;
public:
	Carriage();
	Carriage(bool c);
	bool getAsiento(int n);
	void setAsiento(int n);
	bool getPrimera();
	void setPrimera(bool c);
	void ocupar();
	virtual ~Carriage();
};

#endif /* CARRIAGE_H_ */
