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
    int end;
    int button;
}input;

typedef struct {
    int ENA1;
    int ENA2;
    int reset;
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
    void setOutput(int, int, int*);
    int getENA1();
    int getENA2();
    int getReset();
    virtual ~Cronometer();
};