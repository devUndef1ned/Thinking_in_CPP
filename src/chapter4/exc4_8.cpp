/*
 * exc4_8.cpp
 *
 *  Created on: 28 февр. 2016 г.
 *      Author: ќлег
 */

#include "chapter4.h"
#include <iostream>

using namespace std;

void exc4_8(){

	Stack stack;
	stack.initialize();

	for (int i = 0; i < 10; i++){
		double d = 10.0 * i;
		stack.push(&d);
	}

	for (int i = 0; i < 10; i++){
		double tmp = *(double*) stack.pop();
		cout << "stack.pop() = " << tmp << endl;
	}
}

