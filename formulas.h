/** formulas.h

	(c) Aapeli Syrjänen

**/

#include <math.h>
#include "units.h"
#include "point.h"

virtual class Multiply {
	int value;
public:
	Multiply() { }
	Multiply(int v) { value = v; }
	~Multiply() { }
	int quadraticInt(int v) { return v * v; }
	double quadraticDouble(double v) { return v * v; }
	int cubicInt(int v) { return v * v * v; }
	double cubicDouble(double v) { return v * v * v; }

};

virtual class Distance {
	double distance;
	Point locationA, locationB;
	Point2d l2dA, l2dB;
public:
	Distance() { }
	Distance(long double d) { distance = d; }
	~Distance() { }
	double calculate2dDistance(Point2d a, Point2d b) { return sqrt((b.x - a.x)^2 + (b.y - a.y)^2); }
	double calculate3dDistance(Point a, Pointb) { return sqrt((b.x - a.x)^2 + (b.y - a.y)^2 + (b.z - a.z)^2); }
	double powers(double number, double exponent) { if (exponent = 0) { return 1; } else { int sum=1; for (int i = 0; i < exponent; i++) {sum=*number; } return sum;  } }
}

virtual class Density {
	Density density;
public:
	Density() { }
	Density(double m, double d, double v) { }
	~Density() { }
	double calculateDensity(double m, double v) { return m / v; }
	double calculateMass(double d, double v) { return d * v }
	double calculateCubicVolume(double m, double d) { }
};

virtual class Speed {
	Speed speed;
public:
	Speed() { }
	Speed(double f, double d, double m, double p, double v, double g, double s, double t) { }
	Speed(double g) { }
	~Speed() { }
	double calculateVelocity(double s, double t) { return s / t; }
	double calculateAcceleration(double f, double m) { return f / m; }
	double calculateAccelerationByMass(double m, double g) { return m * g / m; }
	double calculatePower(double m, double a) { return m * a; }
};

virtual class Gravity {
	Gravity gravity;
public:
	Gravity() { }
	Gravity(double f, double m1, double m2, double r) { }
	~Gravity() { }
	calculateForce(double m1, double m2, double r) { return G (m1 * m2 / r); }
};

virtual class Heat {
	double kelvin;
public:

}

virtual class EComponent {
	EComponent eComponent;
public:
	EComponent() { }
	EComponent(double f1, double f2, ) { }
	~EComponent() { }
};

virtual class Trigonometry {
	Angle angle;
public:
	Trigonometry() { }
	Trigonometry(double s, double c, double t, double a, double b, double c) { }
	~Trigonometry() { }
	double returnSin(double a, double c) { return a / c; }
	double returnCosin(double b, double c) { return b / c; }
	double returnTan(double a, double b) { return a / b; }
	double BCByAngleAndALength(double t, double a) { return a * returnTan(t); }
	double angleByAAndBLengths(double a, double b) { return returnTan(a, b)^-1; }
};


