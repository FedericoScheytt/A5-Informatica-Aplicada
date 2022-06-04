/*
 * Point3D.cpp
 *
 *  Created on: 6 may. 2022
 *      Author: Fede
 */

#include "Point3D.h"

Point3D::Point3D() {
	x = 0;
	y = 0;
	z = 0;
}

Point3D::Point3D(int x1, int y1, int z1) {
	x = x1;
	y = y1;
	z = z1;
}

Point3D::Point3D(int low, int high) {
	x = low + rand() % (high - low);
	y = low + rand() % (high - low);
	z = low + rand() % (high - low);

}

int Point3D::getX() const {
	return x;
}

int Point3D::getY() const {
	return y;
}

int Point3D::getZ() const {
	return z;
}

void Point3D::setX (int tx) {
	x = tx;
}

void Point3D::setY (int ty) {
	y = ty;
}

void Point3D::setZ (int tz) {
	z = tz;
}

bool Point3D::equals(Point3D q){
	return (x==q.x && y==q.y && z==q.z);
}

bool Point3D::equals(int x1, int y1, int z1){
	return (x==x1 && y==y1 && z==z1 );
}

void Point3D::shiftX(int tx){
	x += tx;
}

void Point3D::shiftY(int ty){
	y += ty;
}

void Point3D::shiftZ(int tz){
	z += tz;
}

void Point3D::translate(int tx, int ty, int tz){
	x += tx;
	y += ty;
	z += tz;
}

double Point3D::distanceOrigin(){
	return(sqrt(pow(x,2) + pow(y,2) + pow(z,2)));
}

double Point3D::distanceToPoint(Point3D q){
	return(sqrt(pow(x-q.x,2) + pow(y-q.y,2) + pow(z-q.z,2)));
}

int Point3D::scalarProduct(Point3D q){
	return (x*q.x + y*q.y + z*q.z);
}

string Point3D::whichSpace(){
	string a;

	if(x>0){
		a = " esta en el semiplano derecho";
	} else {
		a = " esta en el semiplano izquierdo";
	}
	if(y>0){
		a += ", arriba ";
	} else {
		a += ", abajo ";
	}
	if(z>0){
		a += "y delante.";
	} else {
		a += "y atras.";
	}
	return a;
}

bool Point3D::inBox(int xbox, int ybox, int zbox, int widht, int height, int depth){
	return (x>=xbox && x<=xbox+widht && y<=ybox && y>=ybox-height && z<=zbox && z>=zbox-depth);
}

bool Point3D::inSphere(Point3D c, int r){
	return(distanceToPoint(c)<=r);
}

