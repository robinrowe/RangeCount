// RangeCount.cpp
// Created by Robin Rowe 2022-01-31
// MIT License

#include "RangeCount.h"
using namespace std;

ostream& RangeCount::Print(ostream& os) const
{	// to-do
	return os << "RangeCount";
} 

istream& RangeCount::Input(std::istream& is) 
{	// to-do
	return is;
}

bool RangeCount::Compute(const Database& db)
{	for(const auto& composer : db.data)
	{	for(int i = composer.GetMin();i<composer.GetMax();i++)
		{	auto& r = matrix.Get(i);
			r.data.insert(composer);
	}	}
	return true;
}