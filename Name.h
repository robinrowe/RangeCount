// Name.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Name_h
#define Name_h

#include <iostream>

class Name
{//	Name(const Name&) = delete;
//	void operator=(const Name&) = delete;
	bool IsBlank(const char* name) const
	{	if(!name[0])
		{	return true;
		}
		return false;
	}
public:
	const char* first;
	const char* last;
	~Name()
	{}
	Name()
	:	first("")
	,	last("")
	{}
	bool operator!() const
	{	return IsBlank(first) && IsBlank(last);
	}
	bool operator<(const Name& n) const
	{	int compare = strcmp(last,n.last);
		if(!compare)
		{	compare = strcmp(first,n.first);
		}
		if(-1 != compare)
		{	return false;
		}
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
