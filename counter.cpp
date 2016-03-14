// count.cpp - testfile

#include <iostream>
#include "counter.h"
using namespace std;


// class 


int main()
{
	Counter a, b;
	Counter c(1);

	try {

		for (int i = 0; i < 10; i++) {

//			if (c.maxCount()) {
//				throw MAX_VAL;
//			} 


			cout << "a : " << a.addCounter() << " " << a.addCounter() << " " << a.addCounter() << endl;
			cout << "b : " << b.addCounter() << " " << b.addCounter() << " " << b.addCounter() << endl;
			cout << "c : " << endl << c.getCounter() << " " << c.addCounter() << " " << c.addCounter() << endl;

			//c.pause(100);

       		        a.addCounter();
	                b.addCounter();
			c.addCounter();

			if (c.maxCounter()) {

				cout << c.addCounter() << " ";
				cout << c.addCounter() << " ";
				cout << c.addCounter() << endl;
               	         
				cout << c.addCounter() << " ";
                                cout << c.addCounter() << " ";
                                cout << c.addCounter() << endl;
	
			} else {
				//throw MAX_VAL;
			}
		}

	} catch (int e) {
		cout << "Exception " << e << endl;
	}

	return 0;
}

