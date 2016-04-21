/*
 * exc7_1.cpp
 *
 *  Created on: 21 апр. 2016 г.
 *      Author: kuzmin_og
 */

#include <iostream>
#include <string>
#include <fstream>
#include "chapter7.h"

using namespace std;

class Text{

public:
	Text();
	Text(char* fileName);
	~Text();
	string contents();

private:
	string content;

};

Text::Text(){
	content = "";
}

Text::Text(char* fileName){

	ifstream fileStream;
	fileStream.open(fileName, ios::in);

	if(fileStream.is_open()){

		while (getline(fileStream, content));
		fileStream.close();
	}
}

Text::~Text(){

	content.clear();
}

string Text::contents(){

	return content;
}

void exc7_1(){

	char fileName[] = {'someTextFile.txt'};

	Text* text = new Text(fileName);

	cout << text->contents() << endl;
}
