// Lifetime.cpp
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iomanip>
#include "Lifetime.h"
using namespace std;

ostream& Lifetime::Print(ostream& os) const
{	if(!*this)
	{	return os;
	}
	if(!death)
	{	return os << "(" << setw(4) << birth << "-    )";
	}
	return os << "(" << setw(4) << birth << "-" << setw(4) << death << ")";
} 

istream& Lifetime::Input(std::istream& is) 
{	// to-do
	return is;
}
