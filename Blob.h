// Blob.h 
// Created by Robin Rowe 2022-01-31
// MIT License

#ifndef Blob_h
#define Blob_h

#include <iostream>
#include <string>

class Blob
{	Blob(const Blob&) = delete;
	void operator=(const Blob&) = delete;
	std::string s;
	char* p;
public:
	~Blob()
	{}
	Blob()
	:	p(0)
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	bool Open(const char* filename);
	char* Get();
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Blob& blob)
{	return blob.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Blob& blob)
{	return blob.Input(is);
}

#endif
