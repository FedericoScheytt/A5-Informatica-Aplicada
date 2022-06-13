/**
 * @file Output.h
 * @author Grupo N3
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "TP2Lib.h"

typedef struct {
    int ENA1 = 1;
    int ENA2 = 1;
}ENA;

class Output {
private:
    ENA out;

public:
    Output();
    void setOutput(int, int, int*);
    int getENA1();
    int getENA2();
    virtual ~Output();

};