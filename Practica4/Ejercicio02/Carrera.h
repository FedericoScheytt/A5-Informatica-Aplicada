/**
 * @file Carrera.h
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef CARRERA_H_
#define CARRERA_H_

class Carrera {
private:
	float distance;
	char *winner;
public:
	Carrera(float d, char *w);
	float getDistance();
	char *getWinner();
	virtual ~Carrera();
};

#endif /* CARRERA_H_ */
