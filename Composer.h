// Composer.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Composer_h
#define Composer_h

#include <iostream>

class Composer
{	Composer(const Composer&) = delete;
	void operator=(const Composer&) = delete;

public:
	~Composer()
	{}
	Composer()
	{}
	bool operator!() const
	{	// to-do
		return true;
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
