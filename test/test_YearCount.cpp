// test_YearCount.cpp 
// Created by Robin Rowe 2022-02-04
// MIT License

#include <iostream>
#include "../YearCount.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing YearCount" << endl;
	YearCount yearCount;
	if(!yearCount)
	{	cout << "YearCount failed on operator!" << endl;
		return 1;
	}
	cout << yearCount << endl;
	cout << "YearCount Passed!" << endl;
	return 0;
}
