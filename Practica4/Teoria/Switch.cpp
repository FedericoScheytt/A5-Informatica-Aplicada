#include <iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 1;

    int c = a==b;

    switch(c){
        case 0: cout << "a != b";
        case 1: cout << "a == b";
    }

    return 0;
}