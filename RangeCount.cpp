// RangeCount.cpp
// Created by Robin Rowe 2022-01-31
// MIT License

#include <iomanip>
#include "RangeCount.h"
#include "YearCount.h"
using namespace std;

ostream& RangeCount::Print(ostream& os) const
{	for(const auto& it : matrix.data)
	{	os << it.second << endl;
	}
	return os;
} 

istream& RangeCount::Input(std::istream& is) 
{	// to-do
	return is;
}

bool RangeCount::Compute(const Database& db)
{	for(const auto& composer : db.data)
	{	for(int i = composer.GetMin();i<composer.GetMax();i++)
		{	auto& year = matrix.Get(i);
			year.data.insert(composer);
	}	}
	return true;
}

ostream& RangeCount::PrintMax(ostream& os) const
{	os << "The most recent period of time, consecutive years,\n"
		"when the largest number of composers were alive:" << endl;
	YearCount yearCount[2];
	YearCount yearMax[2];
	for(const auto& it : matrix.data)
	{	const auto& year = it.second;
		yearCount[1].date = year.date;
		yearCount[1].count = year.data.size();
		if(yearCount[0].IsConsecutive(yearCount[1]))
		{	size_t count = yearCount[0].count + yearCount[1].count;
			if(count >= yearMax[0].count + yearMax[1].count)
			{	yearMax[0] = yearCount[0];
				yearMax[1] = yearCount[1];
//				os << yearMax[0] << endl;
		}	}
		yearCount[0] = yearCount[1];
	}
	os << yearMax[0] << " to " << yearMax[1] << " (" << yearMax[0].count + yearMax[1].count << ")" ;
	return os;
}
