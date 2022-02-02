// test_Row.cpp 
// Created by Robin Rowe 2022-02-01
// MIT License

#include <iostream>
#include "../Row.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Row" << endl;
	Row row(1);
	if(!row)
	{	cout << "Row failed on operator!" << endl;
		return 1;
	}
	cout << row << endl;
	cout << "Row Passed!" << endl;
	return 0;
}
