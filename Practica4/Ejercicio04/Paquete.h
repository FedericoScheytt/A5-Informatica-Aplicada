#include <iostream>
#include <string.h>

#define IP_LENGHT 4
#define DATA_LENGHT 100

class Paquete {
private:
    const char *IPe;
    const char *IPr;
    unsigned int ID;
    char *dato;
public:
    Paquete();
    Paquete(const char*, const char*, unsigned int, const char*);
    const char* getIPe();
    const char* getIPr();
    int getID();
    const char* getDato();
    void setDato(char*);
    virtual ~Paquete();
};