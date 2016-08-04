/*
 * chapter5.h
 *
 *  Created on: 19 марта 2016 г.
 *      Author: ќлег
 */

#ifndef CHAPTER5_CHAPTER5_H_
#define CHAPTER5_CHAPTER5_H_

class A;
class B;
class C{
public:
	C();
	~C();
	void setDataOfA(int i, A& a);
};

class A{

private:
	int iA;
	friend void C::setDataOfA(int i, A& a);
	friend B;

public:
	A();
	~A();
	void printA();
	void setA(int a);
	int getA() const;
};

class B{
public:
	B();
	~B();
	void setDataOfA(int i, A& a);
};


class StackImpl1;
class StackImpl2;

class StackOfInt{
public:
	StackOfInt(int size);
	~StackOfInt();
	void initialize();
	int getCurrentIndex();
	void push(int);
	int pop();
private:
	int index;
	int STACK_SIZE;
	friend class StackImpl1;
	friend class StackImpl2;
	StackImpl1* stack1;
	StackImpl2* stack2;
};



void exc5_5();
void exc5_14();


#endif /* CHAPTER5_CHAPTER5_H_ */
