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
#include "Cronometer.cpp"

int main(){

    srand(time(NULL));

    do{
        Cronometer c;
        int temp = 0;
        int state = 0;
        int n = numbEvents();

        printTitle();

        for (int i = 0; i < n; i++){
            c.setRandomInput();
            c.setOutput(c.getButton(), c.getEnd(), &state);
            printEvent(i, c.getButton(), c.getEnd(), c.getENA1(), c.getENA2(), c.getReset(), &temp, &state);
        }
        
    }while(wantToContinue());

    return 0;
}