#include "Paquete.h"

Paquete::Paquete(){
    IPe = "0000";
    IPr = "0000";
    ID = 0;
    dato = (char*)"0";
}

Paquete::Paquete(const char* ipe, const char* ipr, unsigned int id, const char* d){
    IPe = ipe;
    IPr = ipr;
    ID = id;
    if(strlen(d)<DATA_LENGHT){
        dato = new char[DATA_LENGHT+1];
        char* ceros = new char[DATA_LENGHT-(strlen(d)+1)];
        for (int i = 0; i < DATA_LENGHT-(strlen(d)+1); i++)
        {
            if (i%2)
            {
                *(ceros+i) = '0';
            } else {
                *(ceros+i) = '1';
            }
        }
        strncpy(dato, d, strlen(d)+1);
        strncat(dato, ceros, DATA_LENGHT+1);
    }else {
        dato = (char*)'0';
    }
}

const char* Paquete::getIPe(){
    return IPe;
}

const char* Paquete::getIPr(){
    return IPr;
}

int Paquete::getID(){
    return ID;
}

const char* Paquete::getDato(){
    return dato;
}

void Paquete::setDato(char* d){
    dato = d;
}

Paquete::~Paquete(){
    delete dato;
}