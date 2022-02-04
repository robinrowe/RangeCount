// Name.cpp
// Created by Robin Rowe 2022-01-31
// MIT License

#include "Name.h"
using namespace std;

ostream& Name::Print(ostream& os) const
{	if(!*this)
	{	return os << "(blank)";
	}
	return os << last;
} 

istream& Name::Input(std::istream& is) 
{	// to-do
	return is;
}
