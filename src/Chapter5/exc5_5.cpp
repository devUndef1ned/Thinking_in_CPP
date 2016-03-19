/*
 * exc5_5.cpp
 *
 *  Created on: 19 марта 2016 г.
 *      Author: ќлег
 */

#include "chapter5.h"
#include <iostream>

using namespace std;



void exc5_5(){

	A* a = new A();
	B* b = new B();
	C* c = new C();

	a->setA(10);
	a->printA();
	b->setDataOfA(100, *a);
	c->setDataOfA(1000, *a);

	delete a;
	delete b;
	delete c;


}

int A::getA() const {
		return iA;
}

void A::setA(int a) {
		iA = a;
}

void A::printA(){
		cout << "int of this instance of A is " << iA << endl;
}

A::A(){
		cout << "constructor of A()" << endl;
}
A::~A(){
		cout << "destructor of A()" << endl;
}

void C::setDataOfA(int i, A& a){

	cout << "Calling friendly C::setDataOfA()" << endl;
	a.iA = i;
	a.printA();
}

C::C(){
			cout << "constructor of C()" << endl;
		}

C::~C(){
			cout << "destructor of C()" << endl;
}

B::B(){
			cout << "constructor of B()" << endl;
		}

B::~B(){
			cout << "destructor of B()" << endl;
}

void B::setDataOfA(int i, A& a){
			cout << "class B invoke setDataOfA() " << endl;
			a.iA = i;
			a.printA();

};

