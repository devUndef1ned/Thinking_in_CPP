/*
 * exc4_24.cpp
 *
 *  Created on: 14 марта 2016 г.
 *      Author: ќлег
 */

#include <iostream>

using namespace std;

struct SomeStruct{
	int someInt;
	SomeStruct* next;

	void printStruct();
};

void SomeStruct::printStruct(){

	cout << "The instance with id = " << someInt << ", and his pointer is " << this << endl;
}

void func1(SomeStruct* ptr_someStruct, int size){

	SomeStruct* worker = ptr_someStruct;

	for (int i = 0; i < size; i++){

		SomeStruct* temp;

		if (i == (size - 1))
			temp = 0;
		else
			temp = new SomeStruct;

		worker->someInt = i;
		worker->next = temp;
		worker = temp;
	}
}

void func2(SomeStruct* begin){

	SomeStruct* worker = begin;

	while(true){
		worker->printStruct();

		if (worker->next != 0)
		worker = worker->next;
		else
			break;

	}
}

void exc4_24(){

	SomeStruct* ptr = new SomeStruct;

	func1(ptr, 10);
	func2(ptr);


}
