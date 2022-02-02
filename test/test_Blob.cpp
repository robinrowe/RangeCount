// test_Blob.cpp 
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iostream>
#include "../Blob.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Blob" << endl;
	Blob blob;
	if(!blob)
	{	cout << "Blob failed on operator!" << endl;
		return 1;
	}
	cout << blob << endl;
	cout << "Blob Passed!" << endl;
	return 0;
}
