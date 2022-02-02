// Matrix.cpp
// Created by Robin Rowe 2022-02-01
// MIT License

#include "Matrix.h"
#include <assert.h>
using namespace std;

ostream& Matrix::Print(ostream& os) const
{	// to-do
	return os << "Matrix";
} 

istream& Matrix::Input(std::istream& is) 
{	// to-do
	return is;
}

Row& Matrix::Get(int i)
{	auto it = data.find(i);
	if(it != data.end() )
	{	return it->second;
	}
	Row r(i);
	auto [it2, b] = data.emplace(i,r);
	return it2->second;
}
