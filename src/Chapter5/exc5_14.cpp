/*
 * exc4_15.cpp
 *
 *  Created on: 20 марта 2016 г.
 *      Author: ќлег
 */



#include "chapter5.h"
#include <iostream>
#include <vector>

using namespace std;

void exc5_14(){

	StackOfInt* stack = new StackOfInt(10);
	stack->initialize();

	for (int i = 0; i <= 10; ++i){
		stack->push(i*i*10);
	}

	for (int i = 0; i <= 10; ++i){

		int result = stack->pop();
		int index = stack->getCurrentIndex() + 1;

		cout << "For data from stack with index " << index << " data is " << result << endl;
	}

	delete stack;


}

class StackImpl1{

	int* arr;
	int index;
	friend StackOfInt;

	void initialize(int a){

		cout << "StackImpl1::initialize()" << endl;

		arr = new int[a];
		index = 0;

	}

	void add(int a){

		arr[index] = a;
		++index;
	}

	int pop(){

		int result = arr[index];
		--index;
	}

	int getIndex(){
		return index;
	}
};

class StackImpl2{

	vector<int> arr;
	int index;
	friend StackOfInt;

	void initialize(){

		cout << "StackImpl1::initialize()" << endl;

		//arr = new vector<int>;
		index = 0;

	}

	void add(int a){

		arr.insert(arr.end(), a);
		++index;
	}

	int pop(){


		int result = arr[index];
		--index;
		arr.pop_back();
	}

	int getIndex(){
		return index;
	}
};

void StackOfInt::initialize(){
	stack1 = new StackImpl1();
	stack2 = new StackImpl2();
	stack1->initialize(this->STACK_SIZE);
	stack2->initialize();
}
int StackOfInt::getCurrentIndex(){

	return stack1->getIndex();
}
void StackOfInt::push(int a){

	if (this->getCurrentIndex() >= STACK_SIZE)
		cout << "Stack is full. Please clear stack" << endl;
	else{
		stack1->add(a);
		stack2->add(a);
	}

}
int StackOfInt::pop(){

	int result = -1;

	if (this->getCurrentIndex() == 0)
		cout << "Stack is empty. There is nothing for pop" << endl;
	else {
	result = stack1->pop();
	stack2->pop();
	}

	return result;
}


StackOfInt::StackOfInt(int size){

	STACK_SIZE = size;

	cout << "Stack is created" << endl;
}

StackOfInt::~StackOfInt(){
	delete stack1;
	delete stack2;

	cout << "Stack is destroyed" << endl;
}
