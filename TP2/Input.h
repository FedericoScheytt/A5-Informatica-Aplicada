/**
 * @file Input.h
 * @author Grupo N3
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "TP2Lib.h"

typedef struct{
    int end = 1;
    int button = 1;
}input;

class Input {
private:
    input in;
public:
    Input();
    void setRandomInput();
    int getButton();
    int getEnd();
    virtual ~Input();
};