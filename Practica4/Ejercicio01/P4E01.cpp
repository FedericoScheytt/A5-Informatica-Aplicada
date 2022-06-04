/*
 * P1E01.cpp
 *
 *  Created on: 6 may. 2022
 *      Author: Fede
 */

#include "Point3D.h"

using std::cout;
using std::endl;
using std::stringstream
;


int main(){
	srand(time(NULL));

	Point3D pt1, pt2(10,-5,4), pt3(5,15);

	cout << "Punto 1 es: (" << pt1.getX() << ", " << pt1.getY() << ", " << pt1.getZ() << ")" << endl;
	cout << "Punto 2 es: (" << pt2.getX() << ", " << pt2.getY() << ", " << pt2.getZ() << ")" << endl;
	cout << "Punto 3 es: (" << pt3.getX() << ", " << pt3.getY() << ", " << pt3.getZ() << ")" << endl;

	pt2.setX(9);
	pt2.setY(8);
	pt2.setZ(-6);
	cout << "Punto 2 ahora es: (" << pt2.getX() << ", " << pt2.getY() << ", " << pt2.getZ() << ")" << endl;

	pt1.shiftX(3);
	pt1.shiftY(-3);
	pt1.shiftZ(7);
	cout << "Punto 1 ahora es: (" << pt1.getX() << ", " << pt1.getY() << ", " << pt1.getZ() << ")" << endl;
	if(pt1.equals(pt2)){
		cout << "El pt1 y pt2 son iguales" << endl;
	} else {
		cout << "El pt1 y pt2 no son iguales" << endl;
	}

	pt1.translate(6,11,-13);
	cout << "Punto 1 ahora es: (" << pt1.getX() << ", " << pt1.getY() << ", " << pt1.getZ() << ")" << endl;
	Point3D pt4(pt1.getX(), pt1.getY(), pt1.getZ());
	cout << "Punto 4 es: (" << pt4.getX() << ", " << pt4.getY() << ", " << pt4.getZ() << ")" << endl;
	if(pt4.equals(pt2.getX(), pt2.getY(), pt2.getZ())){
		cout << "El pt4 y pt2 son iguales" << endl;
	} else {
		cout << "El pt4 y pt2 no son iguales" << endl;
	}

	cout << "La distancia de pt3 al origen es: " << pt3.distanceOrigin() << endl;
	cout << "La distancia entre pt1 y pt3 es: " << pt1.distanceToPoint(pt3) << endl;

	cout << "El producto escalar entre pt1 y pt2 es: " << pt1.scalarProduct(pt2) << endl;

	cout << "El punto pt1 " << pt1.getX() << ", " << pt1.getY() << ", " << pt1.getZ() << pt1.whichSpace() << endl;
	cout << "El punto pt2 " << pt2.getX() << ", " << pt2.getY() << ", " << pt2.getZ() << pt2.whichSpace() << endl;
	cout << "El punto pt3 " << pt3.getX() << ", " << pt3.getY() << ", " << pt3.getZ() << pt3.whichSpace() << endl;

	if(pt2.inBox(-12, 20, 8, 24, 40, 35)){
		cout << "El punto pt2 esta dentro de la caja" << endl;
	} else{
		cout << "El punto pt2 no esta dentro de la caja" << endl;
	}

	Point3D c(1,2,5);

	if(pt1.inSphere(c, 50)){
		cout << "El punto pt1 esta dentro de la esfera" << endl;
	} else{
		cout << "El punto pt1 no esta dentro de la esfera" << endl;
	}

	cout << "Punto 1 es: (" << pt1.getX() << ", " << pt1.getY() << ", " << pt1.getZ() << ")" << endl;
	cout << "Punto 2 es: (" << pt2.getX() << ", " << pt2.getY() << ", " << pt2.getZ() << ")" << endl;
	cout << "Punto 3 es: (" << pt3.getX() << ", " << pt3.getY() << ", " << pt3.getZ() << ")" << endl;
	cout << "Punto 4 es: (" << pt4.getX() << ", " << pt4.getY() << ", " << pt4.getZ() << ")" << endl;

	return 0;
}
