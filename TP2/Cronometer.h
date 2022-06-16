/**
 * @file Cronometer.h
 * @author Grupo N3
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "TP2Lib.h"

typedef struct{
    unsigned int end : 1;
    unsigned int button : 1;
}input;

typedef struct {
    unsigned int ENA1 : 1;
    unsigned int ENA2 : 1;
    unsigned int reset : 1;
}output;

class Cronometer{
private:
    input in;
    output out;
public:
    Cronometer();
    void setRandomInput();
    int getButton();
    int getEnd();
    void setOutput(unsigned int, unsigned int, int*);
    int getENA1();
    int getENA2();
    int getReset();
    virtual ~Cronometer();
};