// Row.h 
// Created by Robin Rowe 2022-02-01
// MIT License

#ifndef Row_h
#define Row_h

#include <iostream>
#include <set>
#include "Composer.h"

class Row
{//	Row(const Row&) = delete;
//	void operator=(const Row&) = delete;
	typedef Composer T;
public:
	int date;
	std::set<T> data;
	~Row()
	{}
	Row(int date)
	:	date(date)
	{}
	bool operator!() const
	{	return !date;
	}
	bool operator<(const Row& r) const
	{	return date < r.date;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Row& row)
{	return row.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Row& row)
{	return row.Input(is);
}

#endif
