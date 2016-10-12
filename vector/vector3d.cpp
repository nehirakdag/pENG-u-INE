#include "vector3d.h"

Vector3D::Vector3D(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

Vector3D Vector3D::operator + (const Vector3D& v) {
	return Vector3D(x + v.x, y + v.y, z + v.z);
}

Vector3D Vector3D::operator - (const Vector3D& v) {
	return Vector3D(x - v.x, y - v.y, z - v.z);
}

Vector3D Vector3D::operator * (const Vector3D& v) {
	return Vector3D(y*v.z - z*v.y, z*v.x - x*v.z, x*v.y - y*v.x);
}

Vector3D Vector3D::operator * (const double& k) {
	return Vector3D(k * x, k * y, k * z);
}

void Vector3D::setLength(const double& newLength) {
	double currentLength = this->getLength();
	
	x = (newLength * x) / currentLength;
	y = (newLength * y) / currentLength;
	z = (newLength * z) / currentLength;

	return;
}

double Vector3D::dot(const Vector3D& v) {
	return double((x * v.x) + (y * v.y) + (z * v.z));
}

double Vector3D::getLength() {
	return sqrt(x*x + y*y + z*z);
}

double Vector3D::getX() {
	return x;
}

double Vector3D::getY() {
	return y;
}

double Vector3D::getZ() {
	return z;
}