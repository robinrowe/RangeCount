// Composer.cpp
// Created by Robin Rowe 2022-01-31
// MIT License

#include <sstream>
#include "Composer.h"
#include "RangeCount.h"
using namespace std;

ostream& Composer::Print(ostream& os) const
{	os << name << ": " << lifetime << endl;
	return os;
} 

istream& Composer::Input(std::istream& is) 
{	// to-do
	return is;
}

/* 
(1732-1771) BRIXI, Franz Xaver
(1837-1910) BALAKIREV, Mili Alexeyevich
(1905-    ) TIPPETT, Sir Michael Kemp
*/

Composer::Composer(char* data)
{	if(!data || *data != '(')
	{	return;
	}
	data++;
	const size_t length = strlen(data);
	if(length < 11)
	{	return;
	}
	istringstream is(data);
	is >> lifetime.birth;
	is.ignore();
	const int c = is.get();
	if(' ' != c)
	{	is >> lifetime.death;
	}
	name.name = data + 11;
}


void Composer::Set(RangeCount& rangeCount) const
{	rangeCount.Set()

}