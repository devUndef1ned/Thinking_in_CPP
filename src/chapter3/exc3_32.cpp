/*
 * exc3_32.cpp
 *
 *  Created on: 7 ����. 2016 �.
 *      Author: ����
 */

#include "chapter3.h"
#include <iostream>

using namespace std;

int f(double d){

	return 2;
}

void exc3_32(){

	int (*f_ptr)(double) = &f;

	int a =  f_ptr(3.2);

	cout << "a = " << a << endl;
}


