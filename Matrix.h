// Matrix.h 
// Created by Robin Rowe 2022-02-01
// MIT License

#ifndef Matrix_h
#define Matrix_h

#include <iostream>
#include <map>
#include "Row.h"

class Matrix
{	Matrix(const Matrix&) = delete;
	void operator=(const Matrix&) = delete;
public:
	std::map<int,Row> data;
	~Matrix()
	{}
	Matrix()
	{}
	bool operator!() const
	{	return !data.size();
	}
	Row& Get(int i);
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Matrix& matrix)
{	return matrix.Print(os);
}

inline
std::istream& operator>>(std::istream& is,Matrix& matrix)
{	return matrix.Input(is);
}

#endif