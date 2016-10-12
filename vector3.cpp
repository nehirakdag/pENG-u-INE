#include "vector.h"

Vector3::Vector3(double a = 0, double b = 0, double c = 0) {
	x = a;
	y = b;
	z = c;
}

Vector3 Vector3::operator + (Vector3 v) {
	return Vector3(x + v.x, y + v.y, z + v.z);
}

Vector3 Vector3::operator - (Vector3 v) {
	return Vector3(x - v.x, y - v.y, z - v.z);
}

Vector3 Vector3::operator * (double k) {
	return Vector3(k * x, k * y, k * z);
}

Vector3 Vector3::operator + (Vector3 v) {
	return Vector3(x + v.x, y + v.y, z + v.z);
}