#include "chapter10.h"
#include <iostream>
#include <cassert>

using namespace std;

class ArrayWrapper{

private:
  int*              array;
  const int         var;
  static int        stat_var;
  void              printStaticInt();
  void              fillArray();

public:
  static const int size = 10;
  ArrayWrapper(int);
  ~ArrayWrapper();
  void printData();
};

void exc10_3() {

ArrayWrapper* arrayWrapper = new ArrayWrapper(1);
arrayWrapper->printData();
delete arrayWrapper;

}

inline ArrayWrapper::ArrayWrapper(int a): var(a) {

  cout << "Making of ArrayWrapper instance" << endl;

  fillArray();
}

inline ArrayWrapper::~ArrayWrapper() {

  cout << "Destroy ArrayWrapper instance" << endl;

  delete this->array;
}

void ArrayWrapper::fillArray() {
  array = new int[size];

  for (int i = 0; i < size; i++) {
    array[i] = i;
  }
}

void ArrayWrapper::printStaticInt() {

  cout << "static const int size = " << size << endl;
}

inline void ArrayWrapper::printData() {

  cout << "this.var = " << this->var << endl;
  printStaticInt();

  for (int i = 0; i < size; i++)
    cout << array[i] << endl;
}
