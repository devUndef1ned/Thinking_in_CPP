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
	void fill(string& str, char* fileName);
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


		string tmp;

		while (getline(fileStream, tmp))
			content += tmp + " ";

		fileStream.close();
	}
}

Text::~Text(){

	content.clear();
}

string Text::contents(){

	return content;
}

void Text::fill(string& str, char* fileName){

	ofstream fout;
	fout.open(fileName, ios::out);
	fout << str;
	fout.close();

}

void exc7_1(){

	char fileName[] = "E:\\EclipseWorkAround\\Thinking_in_CPP\\src\\Chapter7\\someTextFile.txt";
	char fileNameForOut[] = "E:\\EclipseWorkAround\\Thinking_in_CPP\\src\\Chapter7\\textForOut.txt";
	string strForOut = "text for output stream";

	Text* textForOutput = new Text();

	textForOutput->fill(strForOut, fileNameForOut);

	Text* text = new Text(fileName);

	cout << text->contents() << endl;
}
