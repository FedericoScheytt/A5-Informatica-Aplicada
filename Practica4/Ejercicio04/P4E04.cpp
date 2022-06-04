/**
 * @file P4E04.cpp
 * @author Federico Scheytt (federico.scheytt@gmail.com)
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Paquete.cpp"

using namespace std;

int main(void){

    Paquete P("1010", "0101", 456, "Soy un dato!");
    
    cout << "El paquete P posee los siguientes atributos: " << endl;
    cout << "IPe = " << P.getIPe() << endl;
    cout << "IPr = " << P.getIPr() << endl;
    cout << "ID = " << P.getID() << endl;
    cout << "Dato = " << P.getDato() << endl;

    return 0;
}