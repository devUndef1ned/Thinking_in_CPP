/*
 * exc3_15.cpp
 *
 *  Created on: 5 февр. 2016 г.
 *      Author: kuzmin_og
 */


#include <string>
#include <iostream>
#include "chapter3.h"

using namespace std;

typedef struct Human{
	string firstname;
	string lastname;
	int age;
} Human;

void printHuman(Human a){

	cout << "Human's firstname = " << a.firstname << ", lastname = " << a.lastname << ", age = " << a.age << endl;
}

void exc3_15(){

	Human human1;
	human1.firstname = "Ivan";
	human1.lastname  = "Ivanov";
	human1.age = 43;

	printHuman(human1);

	Human* p_human1 = &human1;

	p_human1->firstname = "Sergey";
	p_human1->lastname = "Sergeev";
	p_human1->age = 22;

	printHuman(*p_human1);
}

