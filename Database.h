// Database.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Database_h
#define Database_h

#include <iostream>

class Database
{	Database(const Database&) = delete;
	void operator=(const Database&) = delete;

public:
	~Database()
	{}
	Database()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
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
