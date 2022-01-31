// test_Name.cpp 
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iostream>
#include "../Name.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Name" << endl;
	Name name;
	if(!name)
	{	cout << "Name failed on operator!" << endl;
		return 1;
	}
	cout << name << endl;
	cout << "Name Passed!" << endl;
	return 0;
}
