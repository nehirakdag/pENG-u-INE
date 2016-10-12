#include "main.h"

int main() {
	Vector2D a(3.0, 4.0);
	Vector2D b(6.0, 8.0);

	cout << "2D VECTORS:" << endl;
	cout << "A has:" << " X = " << a.getX() << " Y = " << a.getY() << endl;
	cout << "Length of A is: " << Vector2D::Magnitude(a) << endl;
	cout << "B has:" << " X = " << b.getX() << " Y = " << b.getY() << endl;
	cout << "Length of B is: " << Vector2D::Magnitude(b) << endl;
	cout << endl;

	Vector2D c = a + b;
	cout << "C = A + B " << endl;
	cout << "C has:" << " X = " << c.getX() << " Y = " << c.getY() << endl;
	cout << "Length of C is: " << Vector2D::Magnitude(c) << endl;
	cout << endl;

	Vector2D d = a - b;
	cout << "D = A - B " << endl;
	cout << "D has:" << " X = " << d.getX() << " Y = " << d.getY() << endl;
	cout << "Length of D is: " << Vector2D::Magnitude(d) << endl;
	cout << endl;

	Vector2D e = a * b;
	cout << "E = A * B " << endl;
	cout << "E has:" << " X = " << e.getX() << " Y = " << e.getY() << endl;
	cout << "Length of E is: " << Vector2D::Magnitude(e) << endl;
	cout << endl;

	Vector2D f = a / b;
	cout << "F = A / B " << endl;
	cout << "F has:" << " X = " << f.getX() << " Y = " << f.getY() << endl;
	cout << "Length of F is: " << Vector2D::Magnitude(f) << endl;
	cout << endl;

	double k = 9;
	//double dot = a.dot(b);

	Vector2D a9 = a * k;
	cout << "9 scalar * A has:" << " X = " << a9.getX() << " Y = " << a9.getY() << endl;
	cout << "Length of a9 is: " << Vector2D::Magnitude(a9) << endl;
	cout << endl;

	Vector2D adiv9 = a / k;
	cout << "A / scalar 9 has:" << " X = " << adiv9.getX() << " Y = " << adiv9.getY() << endl;
	cout << "Length of adiv9 is: " << Vector2D::Magnitude(adiv9) << endl;
	cout << endl;

	Vector2D notA = ~a;
	cout << "~A has:" << " X = " << notA.getX() << " Y = " << notA.getY() << endl;
	cout << "Length of ~A is: " << Vector2D::Magnitude(notA) << endl;
	cout << endl;

	bool equals = a == b;
	cout << "A == B is " << equals << endl;

	bool equals2 = b == b;
	cout << "B == B is " << equals2 << endl;
	cout << endl;

	bool greater = a > b;
	cout << "A > B is " << greater << endl;

	bool greater2 = b > a;
	cout << "B > A is " << greater2 << endl;
	cout << endl;

	bool less = a < b;
	cout << "A < B is " << less << endl;

	bool less2 = b < a;
	cout << "B < A is " << less2 << endl;
	cout << endl;

	bool geq = a >= b;
	cout << "A >= B is " << geq << endl;

	bool geq2 = b >= a;
	cout << "B >= A is " << geq2 << endl;
	cout << endl;

	bool leq = a <= b;
	cout << "A <= B is " << leq << endl;

	bool leq2 = b <= a;
	cout << "B <= A is " << leq2 << endl;
	cout << endl;

	double dot = Vector2D::DotProduct(a,b);
	cout << "DotProduct(A, B) is " << dot << endl;
	cout << endl;

	double cross = Vector2D::CrossProduct(a,b);
	cout << "CrossProduct(A, B) is " << cross << endl;
	cout << endl;

	Vector2D unitVectorA = Vector2D::UnitVector(a);
	//cout << "unitVector(A) is " << unitVectorA << endl;
	cout << "unitVector(A) has:" << " X = " << unitVectorA.getX() << " Y = " << unitVectorA.getY() << endl;
	cout << "Length of UnitVector(A) is: " << Vector2D::Magnitude(unitVectorA) << endl;
	cout << endl;

	Vector2D unitVectorB = Vector2D::UnitVector(b);
	//cout << "unitVector(B) is " << unitVectorB << endl;
	cout << "UnitVector(B) has:" << " X = " << unitVectorB.getX() << " Y = " << unitVectorB.getY() << endl;
	cout << "Length of UnitVector(B) is: " << Vector2D::Magnitude(unitVectorB) << endl;
	cout << endl;

	double magA = Vector2D::Magnitude(a);
	cout << "Magnitude(A) is " << magA << endl;
	cout << endl;

	double magB = Vector2D::Magnitude(b);
	cout << "Magnitude(B) is " << magB << endl;
	cout << endl;

	Vector2D perpA = Vector2D::Perpendicular(a);
	//cout << "Perpendicular(A) is " << perpA << endl;
	cout << "Perpendicular(A) has:" << " X = " << perpA.getX() << " Y = " << perpA.getY() << endl;
	cout << "Length of Perpendicular(B) is: " << Vector2D::Magnitude(perpA) << endl;
	cout << endl;

	Vector2D perpB = Vector2D::Perpendicular(b);
	//cout << "Perpendicular(B) is " << unitVectorB << endl;
	cout << "Perpendicular(B) has:" << " X = " << perpB.getX() << " Y = " << perpB.getY() << endl;
	cout << "Length of Perpendicular(B) is: " << Vector2D::Magnitude(perpB) << endl;
	cout << endl;

	cout << "A dot PerpA = " << (Vector2D::DotProduct(a, perpA)) << endl;
	cout << "B dot PerpB = " << (Vector2D::DotProduct(b, perpB)) << endl;
	cout << endl;

	a.setLength(15);
	cout << "A has:" << " X = " << a.getX() << " Y = " << a.getY() << endl;
	cout << "Length of A is: " << Vector2D::Magnitude(a) << endl;

	a.setX(10);
	cout << "A has:" << " X = " << a.getX() << " Y = " << a.getY() << endl;
	cout << "Length of A is: " << Vector2D::Magnitude(a) << endl;

	a.setY(10);
	cout << "A has:" << " X = " << a.getX() << " Y = " << a.getY() << endl;
	cout << "Length of A is: " << Vector2D::Magnitude(a) << endl;
	cout << endl;

	Vector2D rot = Vector2D::Rotate(Vector2D(3, 4), M_PI/2);
	cout << "Rotated has:" << " X = " << rot.getX() << " Y = " << rot.getY() << endl;
	cout << "Length of Rotated is: " << Vector2D::Magnitude(rot) << endl;
	cout << endl;

	


	return 0;
}