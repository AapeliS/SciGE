/* planet.h 
*
* 	Aapeli Syrjänen
*/

#include "../object.h"

#ifndef
#define SOLAR_RADIUS 6.955*10^8
#define MAX_RADIUS 2850*SOLAR_RADIUS+1
#define SOLAR_MASS 1.989*10^30
#define MAX_MASS 6*10^52+1
#endif


class planet {
	int type;
	unsigned long int x, y, z;
	unsigned long int size;
	unsigned long int mass;
public:
	~planet() { }
	planet() { size = 0; mass = 0; }
	planet(unsigned long int s, unsigned long int m) { 
		if (s < MAX_RADIUS && m < MAX_MASS) {
			size = s;
			mass = m;
		} else {
			~object();
		}
	}
	int setLocation(unsigned int xa, unsigned int ya, unsigned int za) {
		if () {
			x = xa;
			y = ya;
			z = za;
		} else if () {
			
		} else {
			
		}
	}
	//unsigned long int returnDensity () {}
	//
}
