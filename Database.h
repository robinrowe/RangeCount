// Database.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Database_h
#define Database_h

#include <iostream>
#include <set>
#include "RangeCount.h"
#include "Blob.h"

template<typename T>
class Database
{	Database(const Database&) = delete;
	void operator=(const Database&) = delete;
	std::set<T> data;
	Blob blob;
	unsigned count;
	int minVal;
	int maxVal;
public:
	~Database()
	{}
	Database<T>()
	:	count(0)
	,	minVal(0)
	,	maxVal(0)
	{}
	bool operator!() const
	{	return !count;
	}
	bool Set(RangeCount& rangeCount)
	{	for(const auto& item : data)
		{	item.Set(rangeCount);
		}
		return true;
	}
	bool Open(const char* filename)
	{	if(!blob.Open(filename))
		{	return false;
		}
		while(char* p = blob.Get())
		{	T t(p);
			if(!t)
			{	return false;
			}
			data.insert(t);
			count++;
			SetMin(t.GetMin());
			SetMax(t.GetMax());
		}
		return true;
	}
	unsigned GetCount() const
	{	return count;
	}
	std::ostream& Print(std::ostream& os) const
	{	for(const auto& item : data)
		{	os << item << std::endl;
		}
		return os;
	}
	std::istream& Input(std::istream& is)
	{	std::cerr << "Input not implemented" << std::endl;
		return is;
	}
	void SetMin(int minVal)
	{	if(!this->minVal)
		{	this->minVal = minVal;
			return;
		}
		if(minVal < this->minVal)
		{	this->minVal = minVal;
	}	}
	void SetMax(int maxVal)
	{	if(!this->maxVal)
		{	this->maxVal = maxVal;
			return;
		}
		if(maxVal > this->maxVal)
		{	this->maxVal = maxVal;
	}	}
};

template<typename T>
std::ostream& operator<<(std::ostream& os,const Database<T>& database)
{	return database.Print(os);
}


template<typename T>
std::istream& operator>>(std::istream& is,Database<T>& database)
{	return database.Input(is);
}

#endif
