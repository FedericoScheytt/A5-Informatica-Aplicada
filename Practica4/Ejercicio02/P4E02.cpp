/**
 * @file P4E2.cpp
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

using namespace std;

#include "Atleta.cpp"
#include "Carrera.cpp"

int main(){
	Atleta A1((char*)"Juan", 10, (char*)"Argentino", 10.5);
	Atleta A2((char*)"Pedro", 7, (char*)"Canadiense", 10.2);

	cout << "El atleta mas rapido es: " << endl;
	if (A1.getTime()<A2.getTime()) {
		cout << A1.getName() << endl;
		Carrera C1(100, A1.getName());
	} else {
		cout << A2.getName() << endl;
	}

	A1.~Atleta();
	A2.~Atleta();

	return 0;
}
