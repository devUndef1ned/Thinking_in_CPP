/*
 * exc4_7.cpp
 *
 *  Created on: 27 ����. 2016 �.
 *      Author: ����
 */


#include "chapter4.h"
#include <iostream>

using namespace std;

void exc4_7(){

	Stash stash;
	stash.initialize(sizeof(double));

	for (int i = 0; i < 10; i++){

		double tmp = 10.0 * i;
		stash.add(&tmp);
	}

	for (int i = 0; i < 10; i++){

		double d = *(double*)stash.fetch(i);
		cout << "stash.element[" << i << "] = " << d << "\n";
	}

}

