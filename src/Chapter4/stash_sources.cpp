/*
 * stash_sources.cpp
 *
 *  Created on: 27 февр. 2016 г.
 *      Author: ќлег
 */


#include "chapter4.h"
#include <cassert>
#include <iostream>

const int increment = 1000;

using namespace std;

void Stash::initialize(int size){

	Stash::	size = size;
			quantity = 0;
			storage = 0;
			next = 0;

}

int Stash::add(const void* element){

	if (next >= quantity) //check free size in buffer
		inflate(increment);

	int startBytes = next * size;
	unsigned char* e = (unsigned char*) element;

	for(int i = 0; i < size; i++)
		storage[startBytes + i] = e[i];

	next++;
	return (next - 1);
}

void* Stash::fetch(int index){
	assert(0 <= index);

	if(index >= next)
		return 0;

	return &(storage[index * size]);
}

int Stash::count(){
	return next;
}

void Stash::inflate(int increase){
	assert(increase > 0);

	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oldBytes = quantity * size;
	unsigned char* b = new unsigned char[newBytes];

	for (int i = 0; i < oldBytes; i++)
		b[i] = storage[i];

	delete []storage;
	storage = b;
	quantity = newQuantity;
}

void Stash::cleanup(){
	if (storage != 0){
		cout << "freeing storage"<< endl;

		delete []storage;
	}
}

