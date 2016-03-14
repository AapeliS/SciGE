/** counter.h
*
*
*/
#include <iostream>
#include "times.h"

#ifndef __COUNTER_H_
#define MIN_VAL 0
#define MAX_VAL 16777216


class Counter {
	int counter;
public:
	Counter() {
			counter = MIN_VAL; 
			std::cout << "count created, " << counter << std::endl;
			counter++;
		}
	Counter(int i) { counter = i; }
	~Counter() { std::cout << "count destroyed." << std::endl; }
	int getCounter() { return counter; }
	int addCounter() { counter++; return counter; }
	bool maxCounter() { if (counter <= MAX_VAL) return true; else return false; }
	//doPause(int i) {
		
		//if (i == 0) {
//			i = i * 1000;
		//}
	//	sleep(i); 
	//}
};

#endif
