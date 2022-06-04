/**
 * @file Atleta.h
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef ATLETA_H_
#define ATLETA_H_

#include <iostream>
#include <stdlib.h>
#include <string.h>

using std::string;

class Atleta {
private:
	char *name;
	int number;
	char *nacionalidad;
	float time;

public:
	Atleta(char *na, int n, char *nac, float t);
	float getTime();
	char *getName();
	virtual ~Atleta();
};

#endif /* ATLETA_H_ */
