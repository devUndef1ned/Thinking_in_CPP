/*
 * exc6_4.cpp
 *
 *  Created on: 3 апр. 2016 г.
 *      Author: ќлег
 */

#include "chapter6.h"
#include <iostream>


using namespace std;

void exc6_4a();

class A6{
	int a;

public:
	A6(){
		a = 0;
		cout << "Create an instance of A by default A(), int a = " << a << endl;
	};

	A6(int i);
	~A6();
};

A6::A6(int i){
	a = i;
	cout << "Create an instance of A6 by A6(int i), int a = " << a << endl;
}

A6::~A6(){
	a = 0;
	cout << "Destroying of object A6(), and a = " << a << endl;
}

void exc6_4(){

	cout << "before inner viewing area" << endl;
	{
		A6* a1 = new A6(5);
		A6* a2 = new A6();

		cout << "before goto" << endl;

		goto label1;

		cout << "after goto in inner viewing area" << endl;
	}

	label1:
	cout << "after goto in exc6_4()" << endl;
}

void exc6_4a(){

	label1:

		cout << "after goto in new function exc6_4a()" << endl;

}



