// Row.cpp
// Created by Robin Rowe 2022-02-01
// MIT License

#include <iomanip>
#include "Row.h"
using namespace std;

ostream& Row::Print(ostream& os) const
{	os << setw(4) << date << ": " << data.size() << " composer";
	if(data.size()>1)
	{	os << "s";
	}
	return os;
} 

istream& Row::Input(std::istream& is) 
{	// to-do
	return is;
}

ostream& Row::PrintLastNames(ostream& os) const
{	Print(os) << ":";
	size_t i = 0;
	for(const auto& composer : data)
	{	os << composer.name.last;
		i++;
		if(i<data.size())
		{	os << ", ";
	}	}
	return os << endl;
}
