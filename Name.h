// Name.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Name_h
#define Name_h

#include <iostream>

class Name
{	Name(const Name&) = delete;
	void operator=(const Name&) = delete;

public:
	~Name()
	{}
	Name()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Name& name)
{	return name.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Name& name)
{	return name.Input(is);
}

#endif
