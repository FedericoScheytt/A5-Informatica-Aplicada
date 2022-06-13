/**
 * @file TP2.cpp
 * @author Grupo N3
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "TP2Lib.h"
#include "TP2Lib.cpp"
#include "Input.cpp"
#include "Output.cpp"

int main(){

    srand(time(NULL));

    do{
        Input in;
        Output out;
        int temp = 0;
        int state = 0;
        int n = numbEvents();

        printTitle();

        for (int i = 0; i < n; i++){
            in.setRandomInput();
            out.setOutput(in.getButton(), in.getEnd(), &state);
            printEvent(i, in.getButton(), in.getEnd(), out.getENA1(), out.getENA2(), &temp, &state);
        }
        
    }while(wantToContinue());

    return 0;
}