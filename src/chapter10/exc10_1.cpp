/*
 * exc1_10.cpp
 *
 *  Created on: 13 ���� 2016 �.
 *      Author: ����
 */

#include "chapter10.h"
#include <iostream>

using namespace std;

int* funcForExc1(int* pInt = 0);

void exc10_1(){

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int size = 7;

	int tmp = *(funcForExc1(arr));

	for (int i = 0; i < size; i++) {
		cout << tmp << endl;
		tmp = *(funcForExc1());
	} 
}

int* funcForExc1(int* pInt){

	static int* arrayBegginer;

	if(pInt != 0)
		arrayBegginer = pInt;
	else
		arrayBegginer += 1;

	return arrayBegginer;

}
