/**
 * @file Output.cpp
 * @author Grupo N3
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Output.h"

Output::Output(){
    out.ENA1 = 0;
    out.ENA2 = 0;
}

void Output::setOutput(int b, int e, int* s){
	if(b==0 && e==0 && *s==0){
		out.ENA1 = 1;
		out.ENA2 = 0;
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
	else if((b==0 && e==1)&&(*s==1||*s==3) ){
		*s = 4;
	}
	else if(b==1 && e==1 && *s==4){
		out.ENA1 = 0;
		out.ENA2 = 0;
		*s=0;
	}
}

int Output::getENA1(){
    return out.ENA1;
}

int Output::getENA2(){
    return out.ENA2;
}

Output::~Output(){

}