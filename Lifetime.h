// Lifetime.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Lifetime_h
#define Lifetime_h

#include <iostream>

class Lifetime
{	Lifetime(const Lifetime&) = delete;
	void operator=(const Lifetime&) = delete;

public:
	~Lifetime()
	{}
	Lifetime()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Lifetime& lifetime)
{	return lifetime.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Lifetime& lifetime)
{	return lifetime.Input(is);
}

#endif
