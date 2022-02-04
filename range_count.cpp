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
	cout << "\tFind the most recent period of time, consecutive years,\n" 
	"\twhen the largest number of composers were alive.\n"
    "\tSome composers in the data don't have death dates,\n"
	"\twere alive in 1993 (the last year of the data)."<< endl;
}

enum
{	ok,
	invalid_args,
	invalid_db,
	invalid_range

};

int main(int argc,char* argv[])
{	cout << "range_count starting..." << endl << endl;
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
	rangeCount.PrintMax(cout) << endl;
	cout << rangeCount << endl
		 << "range_count done!" << endl;
	return ok;
}

