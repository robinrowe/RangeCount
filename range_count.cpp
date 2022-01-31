// range_count.cpp 
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iostream>
using namespace std;

void Usage()
{	cout << "Usage: range_count " << endl;
}

enum
{	ok,
	invalid_args

};

int main(int argc,char* argv[])
{	cout << "range_count starting..." << endl;
	if(argc < 1)
	{	Usage();
		return invalid_args;
	}

	cout << "range_count done!" << endl;
	return ok;
}
