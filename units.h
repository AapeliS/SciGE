/** units.h

	Various units.
	(c) Aapeli Syrjänen

**/

#ifndef __UNITS_H_
#define __UNITS_H_
#define PI 3.141592654
#define DEGREES 360
#define E 2.718281828
#define MILLI 1000
#define CENTI 100
#define DECI 10 
#define METERS 1
#define SECONDS 1
#define VERTICES_IN_A_LINE 2
#define VERTICES_IN_A_SQUARE 4
#define VERTICES_IN_A_CUBE 8
#define VERTICES_IN_A_TRIANGLE 3
#define VERTICES_IN_A_PYRAMID 5
#define VERTICES_IN_A_HEXAGON 6
#define VERTICES_IN_AN_OCTAGON 8
#define VERTICES_IN_A_FAN 9
#define G 6.6720*10^-11
#define AVG_EARTH_PULL 9.82
#define AVG_MOON_PULL 1.62
#define H_RESOLUTION 1280
#define V_RESOLUTION 768

struct Density {
        double mass;
        double density;
        double volume;


}

struct Speed {
	double distance;
	double mass;
	double power;
	double velocity;
	double gravity;
}

struct {

}

struct {

}

struct {


}

struct {

}


class Units {
	point v0, v1, v2, v3, v4, v5, v6, v7, v8
	Point points[100];
	Shape shape;
	Square square;
	Box box;

	Point location;
	int delta1;
	double delta2;
	int amount, vertices;
	int angularX, angularY, angularZ;
	double length, width, height;
	double locationX, locationY, locationZ;
	int meters;
	int tangent;
	short boxy;
	short cylindrical;
	int direction;
	long double distance; //
	bool stretch;
	
	int color[4];
	short gamma;
	int radius;
	int diameter = radius * 2;
	double curvature, k1, k2;
	double mass; //
	double power; //
	double velocity; //
	bool oned;
	bool twod;
	bool threed;
	bool liquid;
	bool loose;
	bool firm;
	bool thin;
	bool metallic;
	bool wooden;
	bool silicon;
	bool gassy;
	bool organic;
	bool plastic;
	bool transparent;
	bool sine;
	bool squared;
	bool cubic;
	bool moving;
	bool destroyable;
	bool burnable;
	double trajectory;
	double gravity; //
	int component;
	unsigned int iterations;

	bool stripy;
	bool griddy;

	bool planet;
	bool moon;
	bool star;
	
	int wall;
	int window;
	int door;
	int balcony;
	int roof;
	int ventilation;
	int drain;
	int building;
public:
	
};

#endif
