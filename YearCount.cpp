// YearCount.cpp
// Created by Robin Rowe 2022-02-04
// MIT License

#include <iomanip>
#include "YearCount.h"
using namespace std;

ostream& YearCount::Print(ostream& os) const
{	return os << setw(4) << date << ": " << count;
}

istream& YearCount::Input(std::istream& is) 
{	// to-do
	return is;
}
