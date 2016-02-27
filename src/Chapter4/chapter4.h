/*
 * chapter4.h
 *
 *  Created on: 12 февр. 2016 г.
 *      Author: kuzmin_og
 */

#ifndef SRC_CHAPTER4_CHAPTER4_H_
#define SRC_CHAPTER4_CHAPTER4_H_

struct Stash{
	int size; 				//size of each element
	int quantity; 			//quantity of elements
	int next; 				//index of next empty element
	unsigned char* storage; //dynamically extended byte array

	//functions
	void initialize(int size);
	void cleanup();
	int add(const void* element);
	void* fetch(int index);
	int count();
	void inflate(int increase);
};

void exc4_4();
void exc4_7();




#endif /* SRC_CHAPTER4_CHAPTER4_H_ */
