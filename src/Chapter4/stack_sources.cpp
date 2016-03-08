/*
 * stack_sources.cpp
 *
 *  Created on: 28 февр. 2016 г.
 *      Author: ќлег
 */
#include "chapter4.h"
#include <cassert>

struct Stack {
	struct Link{
		void* data;
		Link* next;
		void initialize(void* dat, Link* nxt);
	}* head;
	void initialize();
	void push(void* dat);
	void* peek();
	void* pop();
	void cleanup();
};

void Stack::Link::initialize(void* dat, Link* nxt){
	data = dat;
	next = nxt;
}

void Stack::initialize(){head = 0;}

void Stack::push(void* dat){
	Link* newLink = new Link;
	newLink->initialize(dat, head);
	head = newLink;
}
void* Stack::peek(){
	assert(head != 0);
	return head->data;
}

void* Stack::pop(){
	if (head == 0)
		return 0;
	void* result = head->data;
	Link*  oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}

void Stack::cleanup(){
	assert(head == 0);
}




