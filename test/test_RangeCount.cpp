// test_RangeCount.cpp 
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iostream>
#include "../RangeCount.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing RangeCount" << endl;
	RangeCount rangeCount;
	if(!rangeCount)
	{	cout << "RangeCount failed on operator!" << endl;
		return 1;
	}
	cout << rangeCount << endl;
	cout << "RangeCount Passed!" << endl;
	return 0;
}
