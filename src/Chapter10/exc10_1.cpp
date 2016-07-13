/*
 * exc1_10.cpp
 *
 *  Created on: 13 èþëÿ 2016 ã.
 *      Author: Îëåã
 */

#include "chapter10.h"
#include <iostream>

using namespace std;

int* funcForExc1(int* pInt = 0);

void exc10_1(){

	int arr[] = {1, 2, 3, 4, 5, 6, 7};

	int tmp =  *(funcForExc1(arr));

	cout << tmp << endl;

	int i = 0

	while(/*((tmp = *(funcForExc1())) != -1)||*/ i != 8){
		cout << tmp << endl;
		i++;
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


