/*
 * exc3_25.cpp
 *
 *  Created on: 7 февр. 2016 г.
 *      Author: ќлег
 */

#include <iostream>
#include "chapter3.h"

using namespace std;

void printBinary(const unsigned char val, int part){
	for(int i = 7; i >=0; i--){
		if(val & (1 << i))
			cout << "1";
		else
			cout << "0";

		int order = part*8 - (8- i);

		switch (order){
					case 0:
						cout << " - mantise" << endl; break;
					case 31:
						cout << " - sign\n"; break;
					case 23:
						cout << " - order\n"; break;
					case 22:
						cout << "\n"; break;
					}
	}
}

void printFloatBinary(float b){

	unsigned char* c = reinterpret_cast<unsigned char*>(&b);
		for (int i = sizeof(b) - 1; i >= 0; i--){
			printBinary(c[i], i+1);


		}

}

void exc3_25(){

	float a = .1;
	printFloatBinary(a);
	a = 4;
	printFloatBinary(a);

}


