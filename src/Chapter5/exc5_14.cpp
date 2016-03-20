/*
 * exc4_15.cpp
 *
 *  Created on: 20 марта 2016 г.
 *      Author: ќлег
 */



#include "chapter5.h"
#include <iostream>

using namespace std;

void exc5_14(){

}

class StackImpl1{

	int* arr;

	void initialize(int a){

		cout << "StackImpl1::initialize()" << endl;

		arr = new int[a];

	}
};
