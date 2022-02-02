// range_count.cpp 
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iostream>
#include "Database.h"
#include "Composer.h"
#include "RangeCount.h"
using namespace std;

void Usage()
{	cout << "Usage: range_count filename" << endl;
}

enum
{	ok,
	invalid_args,
	invalid_db,
	invalid_range

};

int main(int argc,char* argv[])
{	cout << "range_count starting..." << endl;
	if(argc < 2)
	{	Usage();
		return invalid_args;
	}
	const char* filename = argv[1];
	Database db;
	if(!db.Open(filename))
	{	cout << "Database error" << endl;
		return invalid_db;
	}
	RangeCount rangeCount;
	if(!rangeCount.Compute(db))
	{	cout << "Range error" << endl;
		return invalid_range;
	}
	cout << rangeCount << endl;
	cout << "range_count done!" << endl;
	return ok;
}
