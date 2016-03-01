/*
 * exc4_13.cpp
 *
 *  Created on: 1 марта 2016 г.
 *      Author: kuzmin_og
 */


#include "chapter4.h"
#include <iostream>

using namespace std;

struct Video{

	int id;
	char* title;
	int price;

	void initilialize(){
		id = -1;
		title = &" ";
		price = 0;
	}

	void initialize(int id, char* title, int price){

		Video::id = id;
		Video::title = title;
		Video::price = price;
	}
};

