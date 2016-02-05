/*
 * exc3_6.cpp
 *
 *  Created on: 5 февр. 2016 г.
 *      Author: kuzmin_og
 */

#include "chapter3.h"
#include <iostream>

using namespace std;

void f(int a) {

	cout << "argument a = " << a << endl;
}

void exc3_6(){

	char a;
	int b;
	float c;
	double d;
	long int e;
	long double f;
	unsigned char g;

	cout << "f(): " << (long)&f << endl;
	cout << "char a: " << (long)&a << endl;
	cout << "int b: " << (long)&b << endl;
	cout << "float c: " << (long)&c << endl;
	cout << "double d: " << (long)&d << endl;
	cout << "long int e: " << (long)&e << endl;
	cout << "long double f: " << (long)&f << endl;
	cout << "unsigned char g: " << (long)&g << endl;
}


