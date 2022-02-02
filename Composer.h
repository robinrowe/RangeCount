// Composer.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Composer_h
#define Composer_h

#include <iostream>
#include "Name.h"
#include "Lifetime.h"

class RangeCount;

class Composer
{	const int maxYear = 1993;
public:
	Name name;
	Lifetime lifetime;
	~Composer()
	{}
	Composer()
	{}
	Composer(const Composer& c)
	{	name = c.name;
		lifetime = c.lifetime;
	}
	Composer(char* data);
	void operator=(const Composer& c)
	{	name = c.name;
		lifetime = c.lifetime;
	}
	bool operator!() const
	{	return !name;
	}
	bool operator<(const Composer& c) const
	{	return name < c.name;	
	}
	int GetMin() const
	{	return lifetime.birth;
	}
	int GetMax() const
	{	if(!lifetime.death)
		{	return maxYear;
		}
		return lifetime.death;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Composer& composer)
{	return composer.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Composer& composer)
{	return composer.Input(is);
}

#endif
