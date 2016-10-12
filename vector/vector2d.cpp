#include "vector2d.h"

// Constructor at dimension values 0.0 by default
Vector2D::Vector2D(double a, double b) {
	x = a;
	y = b;
}

// Component-wise operations on two vectors.
// These will apply the respective operation on (x, y)
// values of the first vector and the second vector.
Vector2D Vector2D::operator + (const Vector2D& v) const {
	return Vector2D(x + v.x, y + v.y);
}

Vector2D Vector2D::operator - (const Vector2D& v) const {
	return Vector2D(x - v.x, y - v.y);
}

Vector2D Vector2D::operator * (const Vector2D& v) const {
	return Vector2D(x * v.x, y * v.y);
}

Vector2D Vector2D::operator / (const Vector2D& v) const {
	return Vector2D(x / v.x, y / v.y);
}

// Scalar operations: Multiplication and Division
Vector2D Vector2D::operator * (const double& k) const {
	return Vector2D(k * x, k * y);
}

Vector2D Vector2D::operator / (const double& k) const {
	return Vector2D(x / k, y / k);
}

// The negation of a 2D Vector's (x, y) values 
Vector2D Vector2D::operator ~ () const {
	return Vector2D(-x, -y);
}

// Component and length wise comparison check operations for two vectors
bool Vector2D::operator == (const Vector2D& v) const {
	return (x == v.x && y == v.y);
}

bool Vector2D::operator > (const Vector2D& v) const {
	return (x*x + y*y) > (v.x * v.x + v.y * v.y);
}

bool Vector2D::operator < (const Vector2D& v) const {
	return (x*x + y*y) < (v.x * v.x + v.y * v.y);
}

bool Vector2D::operator >= (const Vector2D& v) const {
	return (x*x + y*y) >= (v.x * v.x + v.y * v.y);
}

bool Vector2D::operator <= (const Vector2D& v) const {
	return (x*x + y*y) <= (v.x * v.x + v.y * v.y);
}

// The product functions for 2D Vectors
double Vector2D::DotProduct(const Vector2D& v1, const Vector2D& v2) {
	return double(v1.x * v2.x + v1.y * v2.y);
}

double Vector2D::CrossProduct(const Vector2D& v1, const Vector2D& v2) {
	return double(v1.x * v2.y - v1.y * v2.x);
}

// Returns the magnitude of the current 2D Vector input
double Vector2D::Magnitude(const Vector2D& v) {
	return sqrt(v.x*v.x + v.y*v.y);
}

// Returns the unit vector of current 2D Vector input
Vector2D Vector2D::UnitVector(const Vector2D& v) {
	double magnitude = Magnitude(v);
	return Vector2D(v.x / magnitude, v.y / magnitude);
}

// Returns a vector that is perpendicular to the current 2D Vector input
Vector2D Vector2D::Perpendicular(const Vector2D& v) {
	return Vector2D(v.y, -v.x);
}

// Returns a rotated vector of the current 2D Vector input by theta degrees
Vector2D Vector2D::Rotate(const Vector2D& v, const double& degrees) {
	double newX = v.x*cos(degrees) - v.y*sin(degrees);
	double newY = v.x*sin(degrees) + v.y*cos(degrees);
	return Vector2D(newX, newY);
}

// Set methods for coordinates and length of the vector
void Vector2D::setX(const double& newX) {
	x = newX;
	return;
}

void Vector2D::setY(const double& newY) {
	y = newY;
	return;
}

void Vector2D::setLength(const double& newLength) {
	double currentLength = Magnitude(*this);
	
	x = (newLength * x) / currentLength;
	y = (newLength * y) / currentLength;

	return;
}

// Get methods for coordinates and length of the vector
double Vector2D::getX() {
	return x;
}

double Vector2D::getY() {
	return y;
}