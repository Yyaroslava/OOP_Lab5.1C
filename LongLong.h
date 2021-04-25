// LongLong.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "BadException.h"

#pragma pack(1)

using namespace std;

class LongLong {
	long x, y;
public:
	void SetX(long value);
	void SetY(long value);
	long GetX() const;
	long GetY() const;
	LongLong();
	LongLong(long, long) throw(invalid_argument, bad_exception, BadException, const char*);
	LongLong(const LongLong&);
	void Read();
	void Display();
	string toString() const;
};
