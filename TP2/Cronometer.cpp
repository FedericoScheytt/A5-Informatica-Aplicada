/**
 * @file Cronometer.cpp
 * @author Grupo N3
 * @version 0.2
 * @date 05-07-2022
 */

#include "Cronometer.h"

Cronometer::Cronometer(){
    in.button = 1;
    in.end = 1;
	in.reset = 1;
    out.ENA1 = 0;
    out.ENA2 = 0;
    s = stand_by;
}

void Cronometer::setRandomInput(){
    in.button = rand() % 2;
    in.end = rand() % 2;
    in.reset = rand() % 2;
}

void Cronometer::setOutput(){
	t = s;
	if(!in.reset){
		out.ENA1 = 0;
		out.ENA2 = 0;
		s = stand_by;
	} else if(!in.end){
		s = e_end;
	} else {
			switch (s){
				case stand_by:
					if(in.button==0){
						out.ENA1 = 1;
						out.ENA2 = 0;
						s = b1_pressed;
					}
					break;
				case b1_pressed:
					if(in.button==1){
						s = b1_released;
					}
					break;
				case b1_released:
					if(in.button==0){
						out.ENA1 = 0;
						out.ENA2 = 1;
						s = b2_pressed;
					}
					break;
				case b2_pressed:
					if(in.button==1){
						s = b2_released;
					}
					break;
				case b2_released:
					if(in.button==0){
						out.ENA1 = 1;
						out.ENA2 = 0;
						s = b1_pressed;
					}
					break;
				case e_end:
					break;
			}
	}
}

void Cronometer::printEvent(int i){
	if(i<10){
		cout << "| 0" << i << " | ";
	} else {
		cout << "| " << i << " | ";
	}

    cout << in.button <<  "      | " << in.end << "   | ";

    if(in.reset){
        cout << "1     | ";
    } else {
        cout << "0     | ";
    }

    cout << out.ENA1 << "    | " << out.ENA2 << "    | ";

    switch (s){
    	case stand_by:
    		cout << "stand_by     |";
    		break;
		case b1_pressed:
			cout << "b1_pressed   |";
			break;
		case b1_released:
			cout << "b1_released  |";
			break;
		case b2_pressed:
			cout << "b2_pressed   |";
			break;
		case b2_released:
			cout << "b2_released  |";
			break;
		case e_end:
			cout << "e_end        |";
			break;
    }
    if(t == s){
		cout << " No relevante |" << endl;
	} else {
		cout << " Relevante    |" << endl;
		t = s;
	}
}
