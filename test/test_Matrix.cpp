// test_Matrix.cpp 
// Created by Robin Rowe 2022-02-01
// MIT License

#include <iostream>
#include "../Matrix.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Matrix" << endl;
	Matrix matrix;
	if(!matrix)
	{	cout << "Matrix failed on operator!" << endl;
		return 1;
	}
	cout << matrix << endl;
	cout << "Matrix Passed!" << endl;
	return 0;
}
