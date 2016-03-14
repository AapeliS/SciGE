// point.cpp - testfile
// (c) Aapeli Syrjänen

#include <iostream>
#include "count.cpp"
using namespace std;

#ifndef MIN_VAL
#define MIN_VAL 0
#define MAX_VAL 256
#endif

#ifndef METER
#define METER 1
#endif

// Point class
class Point {
	double x, y, z;
public:
	Point() {
		x = y = z = MIN_VAL; 
		//cout << "point created, " << x << y << z << endl;
	}
	Point(double x1, double y1, double z1) {
		x = x1;
		y = y1;
		z = z1;	
	}
	~Point() {  }
	//int getPoint() { return Point; }
	int addPoint() {
	//	count++; 
		return 1; 
	}
	bool setPoint(Point p1) {
		x = p1.x;
		y = p1.y;
		z = p1.z;
	}
	bool setPoint(double x1, double y1, double z1) {
		x = x1;
		y = y1;
		z = z1;	
	}
	double returnX() { return x; }
	double returnY() { return y; }
	double returnZ() { return z; }

	void writeCoordinates() { cout << returnX() << " " << returnY() << " " << returnZ() << endl; }
	//bool maxPoint() { if (count <= MAX_VAL) return true; else return false; }
	//pause() { sleep(int i); }
};

/*
class Properties {
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
	double double distance;
	bool stretch;
	
	int color[4];
	short gamma;
	int radius;
	int diameter = radius * 2;
	double curvature, k1, k2;
	double mass;
	double density;
	double volume;
	double power;
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
	double gravity;
	int component;

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
};*/

class Shape {
        Point a, b, c, d;
	//Square square;
public:
        Shape() {
                        //x = y = z = MIN_VAL;
                        //cout << "point created, " << x << y << z << endl;
			Point();
                }
        Shape(double x1, double y1, double z1) {
                //point->x = x1;
                //point->y = y1;
                //point->z = z1;
		Point(x1, y1, z1);
        }
	Shape(Point a1) {
		
		a.setPoint(a1);	
	}
	Shape(Point a1, Point b1) {
		
	}
	Shape(Point a1, Point b1, Point c1) {

	}
	Shape(Point a1, Point b1, Point c1, Point d1) {
		
	}
	Shape(Point a1, Point b1, Point c1, Point d1, Point e1) {

	}
        ~Shape() { cout << "point destroyed." << endl; }
	// write copy constructor;
        //Shape getShape() { return shape; }
        /*int addShape() {
                count++;
		// location
                return count;
        }*/
	Point getPoint() { return a; }
	bool addPoint(Point a) {
		bool s;
		 
		return s; 

	}
	bool addPoint(int x1, int y1, int z1) {
		
	}
        //bool maxPoint() { if (count <= MAX_VAL) return true; else return false; }

};

class Square {
	Shape square;
	Point a, b, c, d;
	Point location;
	double x, y, z;
	double size;
	bool face;
	bool top;
	bool left;
	bool bottom;
	bool right;
	bool back; 
public:
	Square() { 
		x = y = z = MIN_VAL; 
		size = MIN_VAL;
		face = false;
	} //square(0.0, 0.0, 0.0); }
	Square(double s1, Point l) { size = s1; location = l; }
	Square(int size, double x1, double y1, double z1) { }

	bool makeSquare() { 
//		x = y = z = MIN_VAL; 
		//size = METER;
		if (face) {
			//x = MIN_VAL;
			//y = MIN_VAL;
			//z = MIN_VAL;
			x = size + location.returnX();
			y = size + location.returnY();
			z = size + location.returnZ();
			cout << "Points: " << x << " " << y << " " << z << " created." << endl;
			a.setPoint(x, y, z);
			cout << "a Points: "; 
			a.writeCoordinates();
			y = size;
			b.setPoint(x, y, z);
			cout << "b Points: ";
			b.writeCoordinates();
			x = size;
			c.setPoint(x, y, z);
			cout << "c Points: ";// << x << " " << y << " " << z << endl;
			c.writeCoordinates();
			y = MIN_VAL;
			d.setPoint(x, y, z);
			cout << "d Points: ";// << x << " " << y << " " << z << endl;
			d.writeCoordinates();
		}
		else if (top) {
                        x = MIN_VAL;
                        y = size;
                        z = MIN_VAL;

                        cout << "Points: " << x << " " << y << " " << z << " created." << endl;
                        
			a.setPoint(x, y, z);
			z = size;
                        b.setPoint(x, y, z);
                        x = size;
                        c.setPoint(x, y, z);
                        z = MIN_VAL;
                        d.setPoint(x, y, z);

                        cout << "a Points: ";
			a.writeCoordinates();
			cout << "b Points: ";
			b.writeCoordinates();
			cout << "c Points: ";
			c.writeCoordinates();
			cout << "d Points: ";
                        d.writeCoordinates();
	
		}
		return face;	
	}
	bool writeCoordinates() { a.writeCoordinates(), b.writeCoordinates(), c.writeCoordinates(); }
	bool setDirection(bool d1, bool d2, bool d3) {
		face = d1;
		top = d2;
		left = d3;
	}
	double getSize() { return size; }
	~Square() { }
};
/*
class Box {
	Square a, b;
	void squareDuplicate() { b = a; }
public:
	Box() { }
	Box(Square a1) {
		squareDuplicate();
		int size = a.getSize(); 
	}
	Box(Square a1, Square b1) {
		cout << "Box created." << endl; 
		a = a1;
		b = b1;
	}
	~Box() { }
	
	void writeCoordinates() { a.writeCoordinates(); b.writeCoordinates(); }	
};
*/
int main()
{
	int s1, s2, s3;
	s1 = s2 = s3 = METER;
	int s4 = 1.1;
	Point p1(0.01, 0.01, 0.01), p2(1.0, 1.0, 1.0), p3(1.1, 1.1, 1.1), p4(2.3, 2.3, 2.3);
	Square a(s1, p1), b(s2, p2), c(s3, p3);
	
	a.setDirection(true, false, false);
	a.makeSquare();

	b.setDirection(false, true, false);
	b.makeSquare();

	c.setDirection(true, true, true);
	c.makeSquare();	

/*	try {

		//for (int i = 0; i < 10; i++) {

//			if (c.maxCount()) {
//				throw MAX_VAL;
//			} 


			cout << "a : " << a.getCount() << " " << a.addCount() << " " << a.addCount() << endl;
			cout << "b : " << b.getCount() << " " << b.addCount() << " " << b.addCount() << endl;
			cout << "c : " << endl << c.getCount() << " " << c.addCount() << " " << c.addCount() << endl;

			//c.pause(100);

       		        a.addCount();
	                b.addCount();

			if (c.maxCount()) {

				cout << c.addCount() << " ";
				cout << c.addCount() << " ";
				cout << c.addCount() << endl;
               	         
				cout << c.addCount() << " ";
                                cout << c.addCount() << " ";
                                cout << c.addCount() << endl;
	
			} else {
				//throw MAX_VAL;
			}
		}

	} catch (int e) {
		cout << "Exception " << e << endl;
	}*/

	return 0;
}

