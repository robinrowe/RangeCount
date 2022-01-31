// test_Composer.cpp 
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iostream>
#include "../Composer.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Composer" << endl;
	Composer composer;
	if(!composer)
	{	cout << "Composer failed on operator!" << endl;
		return 1;
	}
	cout << composer << endl;
	cout << "Composer Passed!" << endl;
	return 0;
}
