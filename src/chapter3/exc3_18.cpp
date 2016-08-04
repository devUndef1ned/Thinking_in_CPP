
#include <iostream>
#include "chapter3.h"

using namespace std;

void print_array(int*, int);

void exc3_18(){

	const int size = 5;

	int a[size];
	char c;
	int b[size];

	int* p_a = a;
	int* p_b = b;

	cout << "&p_a = " <<(long) p_a << endl;
	cout << "&p_b = " <<(long) p_b << endl;

	p_b = p_b + size;


	for (int i = 1; i <= size; i++){
	*p_b = i;
	p_b++;
	}



	print_array(a, size);


}

void print_array(int* arr, int size){

	for(int i = 0; i < size; i++){

		cout << "arr[" << i << "] = " << arr[i];

		//arr += i;

		if (i == (size-1) )
			cout << endl;
		else
			cout << ", ";
	}
}
