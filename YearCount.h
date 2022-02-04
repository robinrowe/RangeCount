// YearCount.h 
// Created by Robin Rowe 2022-02-04
// MIT License

#ifndef YearCount_h
#define YearCount_h

#include <iostream>

struct YearCount
{//	YearCount(const YearCount&) = delete;
//	void operator=(const YearCount&) = delete;
	int date;
	size_t count;
public:
	~YearCount()
	{}
	YearCount()
	{	Zero();
	}
	void Zero()
	{	date = 0;
		count = 0;
	}
	bool operator!() const
	{	return !date;
	}
	bool IsConsecutive(const YearCount& r)
	{	return r.date == date + 1;
	}
	YearCount& operator=(const YearCount& r)
	{	date = r.date;
		count = r.count;
		return *this;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const YearCount& yearCount)
{	return yearCount.Print(os);
}

inline
std::istream& operator>>(std::istream& is,YearCount& yearCount)
{	return yearCount.Input(is);
}

#endif
