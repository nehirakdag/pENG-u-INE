#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <cmath>

class Vector3D {
private:
	double x;
	double y;
	double z;

public:
	// Constructor at dimension values 0.0 by default
	Vector3D(double = 0.0, double = 0.0, double = 0.0);

	// Component-wise operations on two vectors.
	// These will apply the respective operation on (x, y, z)
	// values of the first vector and the second vector.
	Vector3D operator + (const Vector3D&) const;
	Vector3D operator - (const Vector3D&) const;
	Vector3D operator * (const Vector3D&) const;
	Vector3D operator / (const Vector3D&) const;

	// Scalar operations: Multiplication and Division
	Vector3D operator * (const double& k) const;
	Vector3D operator / (const double& k) const;

	// The negation of a 3D Vector's (x, y, z) values 
	Vector3D operator ~() const;

	// Component wise equality and length wise comparison checks for two vectors
	bool operator == (const Vector3D& v) const;
	bool operator > (const Vector3D& v) const;
	bool operator < (const Vector3D& v) const;
	bool operator >= (const Vector3D& v) const;
	bool operator <= (const Vector3D& v) const;

	// The product functions for 3D Vectors.
	// Returns the respective result for the given operation.
	static double DotProduct(const Vector3D& v1, const Vector3D& v2);
	static Vector3D CrossProduct(const Vector3D& v1, const Vector3D& v2);

	// Returns the magnitude of the current 3D Vector input
	static double Magnitude(const Vector3D& v);

	// Returns the unit vector of current 3D Vector input
	static Vector3D UnitVector(const Vector3D& v);

	// Returns a vector that is perpendicular to the current 3D Vector input
	static Vector3D Perpendicular(const Vector3D& v);

	// Returns a rotated vector of the current 3D Vector input by theta degrees
	// Three methods for three different axes of rotation
	static Vector3D RotateX(const Vector3D& v, const double& degrees);
	static Vector3D RotateY(const Vector3D& v, const double& degrees);
	static Vector3D RotateZ(const Vector3D& v, const double& degrees);

	// Set methods for coordinates and length of the vector
	void setX(const double& newX);
	void setY(const double& newY);
	void setZ(const double& newZ);
	void setLength(const double& l);
	
	// Get methods for coordinates and length of the vector
	double getX();
	double getY();
	double getZ();

};

#endif