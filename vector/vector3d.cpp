#include "vector3d.h"

// Constructor at dimension values 0.0 by default
Vector3D::Vector3D(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

// Component-wise operations on two vectors.
// These will apply the respective operation on (x, y, z)
// values of the first vector and the second vector.
Vector3D Vector3D::operator + (const Vector3D& v) const {
	return Vector3D(x + v.x, y + v.y, z + v.z);
}

Vector3D Vector3D::operator - (const Vector3D& v) const {
	return Vector3D(x - v.x, y - v.y, z - v.z);
}

Vector3D Vector3D::operator * (const Vector3D& v) const {
	return Vector3D(x * v.x, y * v.y, z * v.z);
}

Vector3D Vector3D::operator / (const Vector3D& v) const {
	return Vector3D(x / v.x, y / v.y, z / v.z);
}

// Scalar operations: Multiplication and Division
Vector3D Vector3D::operator * (const double& k) const {
	return Vector3D(k * x, k * y, k * z);
}

Vector3D Vector3D::operator / (const double& k) const {
	return Vector3D(k / x, k / y, k / z);
}

// The negation of a 3D Vector's (x, y, z) values 
Vector3D Vector3D::operator ~ () const {
	return Vector3D(-x, -y, -z);
}

// Component wise equality and length wise comparison checks for two vectors
bool Vector3D::operator == (const Vector3D& v) const {
	return (x == v.x && y == v.y && z == v.z);
}

bool Vector3D::operator > (const Vector3D& v) const {
	return (x*x + y*y + z*z) > (v.x * v.x + v.y * v.y + v.z * v.z);
}

bool Vector3D::operator < (const Vector3D& v) const {
	return (x*x + y*y + z*z) < (v.x * v.x + v.y * v.y + v.z * v.z);
}

bool Vector3D::operator >= (const Vector3D& v) const {
	return (x*x + y*y + z*z) >= (v.x * v.x + v.y * v.y + v.z * v.z);
}

bool Vector3D::operator <= (const Vector3D& v) const {
	return (x*x + y*y + z*z) <= (v.x * v.x + v.y * v.y + v.z * v.z);
}

// The product functions for 3D Vectors.
// Returns the respective result for the given operation.
double Vector3D::DotProduct(const Vector3D& v1, const Vector3D& v2) {
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

Vector3D Vector3D::CrossProduct(const Vector3D& v1, const Vector3D& v2) {
	return Vector3D(v1.y*v2.z - v1.z*v2.y, v1.z*v2.x - v1.x*v2.z, v1.x*v2.y - v1.y*v2.x);
}

// Returns the magnitude of the current 3D Vector input
double Vector3D::Magnitude(const Vector3D& v) {
	return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

// Returns the unit vector of current 3D Vector input
Vector3D Vector3D::UnitVector(const Vector3D& v) {
	double magnitude = Magnitude(v);
	return Vector3D(v.x / magnitude, v.y / magnitude, v.z / magnitude);
}

// Returns a vector that is perpendicular to the current 3D Vector input
Vector3D Vector3D::Perpendicular(const Vector3D& v) {
	if(v.x == 0 && v.y == 0 && v.z == 0) {
		return Vector3D(0.0, 0.0, 0.0);
	}
	if(v.x == 0) {
		return Vector3D(1.0, 0.0, 0.0);
	}
	else if(v.y == 0) {
		return Vector3D(0.0, 1.0, 0.0);
	}
	else if(v.z == 0) {
		return Vector3D(0.0, 0.0, 1.0);
	}
	else{
		return Vector3D(1.0, 1.0, (-1.0 * (v.x + v.y) / v.z));
	}
}

// Returns a rotated vector of the current 3D Vector input by theta degrees
Vector3D Vector3D::RotateX(const Vector3D& v, const double& theta) {
	return Vector3D( v.x, (v.y*cos(theta) - v.z*sin(theta)) , (v.y*sin(theta) + v.z*cos(theta)));
}

Vector3D Vector3D::RotateY(const Vector3D& v, const double& theta) {
	return Vector3D( (v.x*cos(theta) + v.z*sin(theta)), v.y, (-v.x*sin(theta) + v.z*cos(theta)));
}

Vector3D Vector3D::RotateZ(const Vector3D& v, const double& theta) {
	return Vector3D( (v.x*cos(theta) - v.y*sin(theta)) , (v.x*sin(theta) + v.y*cos(theta)), v.z);
}

// Set methods for coordinates and length of the vector
void Vector3D::setX(const double& newX) {
	x = newX;
	return;
}

void Vector3D::setY(const double& newY) {
	y = newY;
	return;
}

void Vector3D::setLength(const double& newLength) {
	double currentLength = Magnitude(*this);
	
	x = (newLength * x) / currentLength;
	y = (newLength * y) / currentLength;
	z = (newLength * z) / currentLength;

	return;
}

// Get methods for coordinates and length of the vector
double Vector3D::getX() {
	return x;
}

double Vector3D::getY() {
	return y;
}