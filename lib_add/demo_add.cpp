#include "demo_add.h"
#include <iostream>

//void hello（）{
//	std::cout << "hello" << std::endl;
//}

int my_add(int n) {
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += i;
	}
	return sum;
}



