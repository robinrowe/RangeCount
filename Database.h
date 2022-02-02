// Database.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Database_h
#define Database_h

#include <iostream>
#include <set>
#include "Blob.h"
#include "Composer.h"

class Database
{	Database(const Database&) = delete;
	void operator=(const Database&) = delete;
	Blob blob;
	unsigned count;
	int minVal;
	int maxVal;
	typedef Composer T;
public:
	std::set<T> data;
	~Database()
	{}
	Database()
	:	count(0)
	,	minVal(0)
	,	maxVal(0)
	{}
	bool operator!() const
	{	return !count;
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

inline
std::ostream& operator<<(std::ostream& os,const Database& database)
{	return database.Print(os);
}

inline
std::istream& operator>>(std::istream& is,Database& database)
{	return database.Input(is);
}

#endif
