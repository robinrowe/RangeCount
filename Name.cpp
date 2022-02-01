// Name.cpp
// Created by Robin Rowe 2022-01-31
// MIT License

#include "Name.h"
using namespace std;

ostream& Name::Print(ostream& os) const
{	return os << name;
} 

istream& Name::Input(std::istream& is) 
{	// to-do
	return is;
}
