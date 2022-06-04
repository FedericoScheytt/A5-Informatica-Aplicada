/*
 * Point3D.h
 *
 *  Created on: 6 may. 2022
 *      Author: Fede
 */

#ifndef POINT3D_H_
#define POINT3D_H_

#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <time.h>

using std::string;

class Point3D {
private:
	int x, y, z;
public:
	Point3D();
	Point3D(int x1, int y1, int z1);
	Point3D(int low, int high);

	int getX() const;
	int getY() const;
	int getZ() const;

	void setX (int tx);
	void setY (int ty);
	void setZ (int tz);

	bool equals(Point3D q);
	bool equals(int x1, int y1, int z1);
	void shiftX(int tx);
	void shiftY(int ty);
	void shiftZ(int tz);
	void translate(int tx, int ty, int tz);
	double distanceOrigin();
	double distanceToPoint(Point3D q);
	int scalarProduct(Point3D q);
	string whichSpace();
	bool inBox (int xbox, int ybox, int zbox, int width, int height, int depth);
	bool inSphere (Point3D center, int radius);

};

#endif /* POINT3D_H_ */
