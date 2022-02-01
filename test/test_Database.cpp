// test_Database.cpp 
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iostream>
#include "../Database.h"
#include "../Composer.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Database" << endl;
	Database<Composer> database;
	if(!database)
	{	cout << "Database failed on operator!" << endl;
		return 1;
	}
	cout << database << endl;
	cout << "Database Passed!" << endl;
	return 0;
}
