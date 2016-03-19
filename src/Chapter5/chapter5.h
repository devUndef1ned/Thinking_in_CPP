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



void exc5_5();


#endif /* CHAPTER5_CHAPTER5_H_ */
