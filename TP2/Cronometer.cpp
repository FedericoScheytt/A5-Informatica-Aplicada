/**
 * @file Cronometer.cpp
 * @author Grupo N3
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Cronometer.h"

Cronometer::Cronometer(){
    in.button = 1;
    in.button = 1;
    out.ENA1 = 0;
    out.ENA2 = 0;
	out.reset = 1;
}

void Cronometer::setRandomInput(){
    in.button = rand() % 2;
    in.end = rand() % 2;
}

int Cronometer::getButton(){
    return in.button;
}

int Cronometer::getEnd(){
    return in.end;
}

void Cronometer::setOutput(int b, int e, int* s){
	if(b==0 && e==0 && *s==0){
		out.ENA1 = 1;
		out.ENA2 = 0;
		out.reset = 0;
		*s = 1;
	}
	else if(b==1 && e==0 && *s==1){
		*s = 2;
	}
	else if(b==0 && e==0 && *s==2){
		out.ENA1 = 0;
		out.ENA2 = 1;
		*s = 3;
	}
	else if(b==1 && e==0 && *s==3){
		*s = 0;
	}
	else if((b==0 && e==1)&&(*s==1||*s==3)){
		*s = 4;
	}
	else if(b==1 && e==1 && (*s==1||*s==3||*s==4)){
		out.ENA1 = 0;
		out.ENA2 = 0;
		out.reset = 1;
		*s=0;
	}
}

int Cronometer::getENA1(){
    return out.ENA1;
}

int Cronometer::getENA2(){
    return out.ENA2;
}

int Cronometer::getReset(){
	return out.reset;
}

Cronometer::~Cronometer(){

}