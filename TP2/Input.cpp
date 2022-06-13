/**
 * @file Input.cpp
 * @author Grupo N3
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Input.h"

Input::Input(){
    in.button = 0;
    in.button = 1;
}

void Input::setRandomInput(){
    in.button = rand() % 2;
    in.end = rand() % 2;
}

int Input::getButton(){
    return in.button;
}

int Input::getEnd(){
    return in.end;
}

Input::~Input(){

}