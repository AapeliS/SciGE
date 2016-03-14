// main.cpp - testfile

#include <iostream>
using namespace std;

#ifndef MIN_VAL
#define MIN_VAL 0
#define MAX_VAL 256
#endif

// main class
class Count {
	int count;
public:
	Count() {
			count = MIN_VAL; 
			cout << "count created, " << count << endl;
			count++;
		}
	~Count() { cout << "count destroyed." << endl; }
	int getCount() { return count; }
	int addCount() { count++; return count; }
	bool maxCount() { if (count <= MAX_VAL) return true; else return false; }
	//pause() { sleep(int i); }
};


/*
int main()
{
	Count a, b, c;

	try {

		for (int i = 0; i < 10; i++) {

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
	}

	return 0;
}
*/
