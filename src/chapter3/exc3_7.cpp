/*
 * exc3_7.cpp
 *
 *  Created on: 5 февр. 2016 г.
 *      Author: kuzmin_og
 */

#include <iostream>
#include <string>
#include "chapter3.h"

using namespace std;

void func1(string* a_ptr);
void func2(string& a_ref);

void exc3_7(){

	string a = "string";

	cout << "sring after init = " << a << endl;

	func1(&a);
	func2(a);

}

void func1(string* p_str){

	*p_str += "+func1";

	cout << "String after func1(): " << *p_str << endl;
}

void func2(string& r_str){

	r_str += "+func2";

	cout << "String after func2(): " << r_str << endl;
}


