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
	int title_length;
	int price;

	void initilialize(){
		id = -1;
		title = " ";
		title_length = 1;
		price = 0;
	}

	void initialize(const int id, const char* title, const int price){

		Video::id = id;
		Video::title = (char*)title;
		Video::title_length = sizeof(title)/sizeof(char);
		Video::price = price;
	}

	void printVideo(){

		cout << "Video with id = " << id << ", title ";
		for (int i = 0; i < title_length; i++){
			cout << (char)*title + i;
		}
		cout << ", and it costs " << price << endl;
	}
};

void exc4_13(){

	Stack stack;
	stack.initialize();

	for (int i = 0; i <5; i++){
		Video tmp;
		tmp.initialize(i + 1, "video #" + (char)i, 10 + 10*i);
		stack.push(&tmp);
	}

	for (int i = 0; i < 5; i++){
		Video* tmp = (Video*)stack.pop();
		tmp->printVideo();
	}
}

