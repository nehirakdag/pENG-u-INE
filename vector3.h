#ifndef VECTOR_H
#define VECTOR_H

class Vector3 {
private:
	double x;
	double y;
	double z;

public:
	Vector3(double = 0, double = 0, double = 0);

	Vector3 operator + (Vector3);
	Vector3 operator - (Vector3);
	Vector3 operator * (Vector3);
	Vector3 operator * (double a);
	double dot(Vector3 v1, Vector3 v2);
	double getLength();
	double setLength(doube l);

};