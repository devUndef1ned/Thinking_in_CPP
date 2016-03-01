/*
 * exc4_4.cpp
 *
 *  Created on: 12 февр. 2016 г.
 *      Author: kuzmin_og
 */

#include "chapter4.h"
#include <iostream>

using namespace std;

struct X;

//void func1(X*, int);

//void func2(X*);

struct X{

	int a;
	void func1(X*, int);
	void func2(X*);
};

void X::func1(X* ptr_x, int i){

	ptr_x->a = i;
}

void X::func2(X* ptr_x){

	cout << "X.a = " << ptr_x->a << endl;
}

void exc4_4(){

	X x;
	X* ptr_x = &x;
	x.func1(ptr_x, 3);
	x.func2(ptr_x);
}


