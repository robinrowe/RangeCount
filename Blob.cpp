// Blob.cpp
// Created by Robin Rowe 2022-01-31
// MIT License

#include <fstream>
#include <sstream>
#include <string.h>
#include "Blob.h"
using namespace std;

ostream& Blob::Print(ostream& os) const
{	// to-do
	return os << "Blob";
} 

istream& Blob::Input(std::istream& is) 
{	// to-do
	return is;
}

bool Blob::Open(const char* filename)
{	ifstream is(filename);
	if(!is.good())
	{	return false;
	}
	ostringstream os;
	os << is.rdbuf();
	if(is.bad())
	{	return false;
	}
	s = os.str();
	p = (char*) s.c_str();
	return true;
}

char* Blob::Get()
{	if(!p)
	{	return 0;
	}
	char* line = p;	
	char* newline = strchr(p,'\r');
	if(!newline)
	{	newline = strchr(p,'\n');
	}
	if(!newline)
	{	p = 0;
		return line;
	}
	*newline = 0;	
	if('\n' == *(newline+1))
	{	newline++;
		*newline = 0;
	}
	p = newline + 1;
	return line;
}