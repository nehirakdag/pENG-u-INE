using namespace std;

#include "vector/vector2d.h"
#include "vector/vector3d.h"
#include <iostream>

int main() {
	Vector2D a(3.0, 4.0);
	Vector2D b(6.0, 8.0);

	cout << "2D VECTORS:" << endl;
	cout << "A has:" << " X = " << a.getX() << " Y = " << a.getY() << endl;
	cout << "Length of A is: " << Vector2D::Magnitude(a) << endl;
	cout << "B has:" << " X = " << b.getX() << " Y = " << b.getY() << endl;
	cout << "Length of B is: " << Vector2D::Magnitude(b) << endl;

	Vector2D c = a / b;
	cout << "C has:" << " X = " << c.getX() << " Y = " << c.getY() << endl;
	cout << "Length of c is: " << Vector2D::Magnitude(c) << endl;

	double k = 9;
	//double dot = a.dot(b);

	Vector2D d = a * k;
	cout << "9 scalar* A has:" << " X = " << d.getX() << " Y = " << d.getY() << endl;

	//cout << "A dot B is: " << dot << endl;

	a.setLength(1);
	cout << "Made A twice the length " << endl;
	cout << "A has:" << " X = " << a.getX() << " Y = " << a.getY() << endl;
	cout << "Length of A is: " << Vector2D::Magnitude(d) << endl;

	return 0;
}