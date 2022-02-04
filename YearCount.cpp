// YearCount.cpp
// Created by Robin Rowe 2022-02-04
// MIT License

#include <iomanip>
#include "YearCount.h"
using namespace std;

ostream& YearCount::Print(ostream& os) const
{	os << setw(4) << date << " with " << count << " composer";
	if(count>1)
	{	os << "s";
	}
	return os;
}

istream& YearCount::Input(std::istream& is) 
{	// to-do
	return is;
}
