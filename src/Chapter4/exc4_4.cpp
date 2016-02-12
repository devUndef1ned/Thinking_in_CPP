/*
 * exc4_4.cpp
 *
 *  Created on: 12 ����. 2016 �.
 *      Author: kuzmin_og
 */

#include "chapter4.h"
#include <iostream>

using namespace std;

struct X;

void func1(X*, int);

void func2(X*);

struct X{

	int a;
	::func1();
	::func2();
};

void ::func1(X* ptr_x, int i){

	ptr_x->a = i;
}

void ::func2(X* ptr_x){

	cout << "X.a = " << ptr_x->a << endl;
}

void exc4_4(){

	X x;
	X* ptr_x = &x;
	::func1(ptr_x, 3);
	::func2(ptr_x);
}


