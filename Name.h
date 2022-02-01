// Name.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Name_h
#define Name_h

#include <iostream>

class Name
{//	Name(const Name&) = delete;
//	void operator=(const Name&) = delete;
public:
	const char* name;
	~Name()
	{}
	Name()
	:	name("")
	{}
	bool operator!() const
	{	return !*name;
	}
	bool operator<(const Name& n) const
	{	const int compare = strcmp(name,n.name);
		if(compare<0)
		{	return true;
		}
		return false;
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
