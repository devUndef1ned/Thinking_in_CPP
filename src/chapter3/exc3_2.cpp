/*
 * exc3_2.cpp
 *
 *  Created on: 4 ����. 2016 �.
 *      Author: ����
 */


#include <iostream>

#include "chapter3.h"

using namespace std;

void exc3_2(){

	for(int i = 2; i < 99; i++){

		bool belong = true;

		for(int j = 2; j < i; j++){

			int delim = i % j;

			belong &= (delim > 0)? true: false;

		}

		if (belong)
			cout << i << " - ������� �����" << endl;
	}
}

