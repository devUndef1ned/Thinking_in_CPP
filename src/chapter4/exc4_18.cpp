/*
 * exc4_18.cpp
 *
 *  Created on: 10 марта 2016 г.
 *      Author: ќлег
 */


#include "chapter4.h"
#include <iostream>

using namespace std;

char* func1(const char*);

void exc4_18(){

	char* tmp = func1("Hello");

	cout << "tmp = " << tmp <<", pointer to tmp = " << &tmp << endl;

	char* tmp1 = func1(tmp);

	delete tmp, tmp1;

	cout << "tmp = " << tmp <<", pointer to tmp = " << &tmp << endl;

	cout << "tmp1 = " << tmp1 <<", pointer to tmp1 = " << &tmp1 << endl;


}

char* func1(const char* string1){

	int size = sizeof(string1)/sizeof(char);

	char* newString = new char[size];

	for (int i = 0; i <= size; i++){
		newString[i] = string1[i];
	}

	return newString;
}

