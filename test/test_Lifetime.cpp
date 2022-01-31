// test_Lifetime.cpp 
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iostream>
#include "../Lifetime.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Lifetime" << endl;
	Lifetime lifetime;
	if(!lifetime)
	{	cout << "Lifetime failed on operator!" << endl;
		return 1;
	}
	cout << lifetime << endl;
	cout << "Lifetime Passed!" << endl;
	return 0;
}
