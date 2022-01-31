// RangeCount.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef RangeCount_h
#define RangeCount_h

#include <iostream>

class RangeCount
{	RangeCount(const RangeCount&) = delete;
	void operator=(const RangeCount&) = delete;

public:
	~RangeCount()
	{}
	RangeCount()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const RangeCount& rangeCount)
{	return rangeCount.Print(os);
}


inline
std::istream& operator>>(std::istream& is,RangeCount& rangeCount)
{	return rangeCount.Input(is);
}

#endif
