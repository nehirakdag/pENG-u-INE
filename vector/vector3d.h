#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <cmath>

class Vector3D {
private:
	double x;
	double y;
	double z;

public:
	Vector3D(double = 0.0, double = 0.0, double = 0.0);

	Vector3D operator + (const Vector3D&);
	Vector3D operator - (const Vector3D&);
	Vector3D operator * (const Vector3D&);
	Vector3D operator * (const double& a);

	void setLength(const double& l);
	double dot(const Vector3D& v);;
	double getLength();
	double getX();
	double getY();
	double getZ();

};

#endif