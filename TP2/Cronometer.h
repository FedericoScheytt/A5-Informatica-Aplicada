/**
 * @file Cronometer.h
 * @author Grupo N3
 * @version 0.2
 * @date 05-07-2022
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

/*=========================[ estructuras ]========================*/
typedef struct{
    unsigned int button : 1;
    unsigned int end : 1;
    unsigned int reset : 1;
}input;

typedef struct {
    unsigned int ENA1 : 1;
    unsigned int ENA2 : 1;
}output;

typedef enum {
	stand_by,
	b1_pressed,
	b1_released,
	b2_pressed,
	b2_released,
	e_end
}state;

/*============================[ clases ]==========================*/
class Cronometer{
private:
    input in;
    output out;
    state s;
    int t;
public:
    Cronometer();
    void setRandomInput();
    void setOutput();
    void printEvent(int);
};
