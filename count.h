/** count.h
*
*
*/
#include <iostream>
#include "times.h"

#ifndef __COUNT_H_
#define MIN_VAL 0
#define MAX_VAL 16777216


class Count {
	int count;
public:
	Count() {
			count = MIN_VAL; 
			std::cout << "count created, " << count << std::endl;
			count++;
		}
	Count(int i) { count = i; }
	~Count() { std::cout << "count destroyed." << std::endl; }
	int getCount() { return count; }
	int reduceCount() { if (count < 0) { --count; } return count; } //
	int addCount() { count++; return count; }
	bool maxCount() { if (count <= MAX_VAL) return true; else return false; }
};

#endif
