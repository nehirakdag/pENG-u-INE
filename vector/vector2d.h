#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <cmath>

class Vector2D {
private:
	double x;
	double y;

public:
	// Constructor at dimension values 0.0 by default
	Vector2D(double = 0.0, double = 0.0);

	// Component-wise operations on two vectors.
	// These will apply the respective operation on (x, y)
	// values of the first vector and the second vector.
	Vector2D operator + (const Vector2D&) const;
	Vector2D operator - (const Vector2D&) const;
	Vector2D operator * (const Vector2D&) const;
	Vector2D operator / (const Vector2D&) const;

	// Scalar operations: Multiplication and Division
	Vector2D operator * (const double& k) const;
	Vector2D operator / (const double& k) const;

	// The negation of a 2D Vector's (x, y) values 
	Vector2D operator ~() const;

	// Component and length wise comparison check operations for two vectors
	bool operator == (const Vector2D& v) const;
	bool operator > (const Vector2D& v) const;
	bool operator < (const Vector2D& v) const;
	bool operator >= (const Vector2D& v) const;
	bool operator <= (const Vector2D& v) const;

	// The product functions for 2D Vectors
	static double DotProduct(const Vector2D& v1, const Vector2D& v2);
	static double CrossProduct(const Vector2D& v1, const Vector2D& v2);

	// Returns the unit vector of current 2D Vector input
	static Vector2D UnitVector(const Vector2D& v);

	// Returns the magnitude of the current 2D Vector input
	static double Magnitude(const Vector2D& v);

	// Returns a vector that is perpendicular to the current 2D Vector input
	static Vector2D Perpendicular(const Vector2D& v);

	// Set methods for coordinates and length of the vector
	void setX(const double& newX);
	void setY(const double& newY);
	void setLength(const double& l);
	
	// Get methods for coordinates and length of the vector
	double getX();
	double getY();
	

};

#endif