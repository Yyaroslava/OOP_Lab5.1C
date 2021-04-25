// LongLongPrivate.h
#pragma once
#include <iostream>
#include "LongLong.h"
#pragma pack(1)

using namespace std;

class LongLongPrivate : private LongLong {
public:
	using LongLong::SetX;
	using LongLong::SetY;
	using LongLong::GetX;
	using LongLong::GetY;
	using LongLong::LongLong;

	LongLongPrivate();
	LongLongPrivate(long, long);
	LongLongPrivate(LongLongPrivate&);

	friend ostream& operator << (ostream&, const LongLongPrivate&);
	friend istream& operator >> (istream&, LongLongPrivate&);
	operator string() const;
	LongLongPrivate& operator = (const LongLongPrivate&);

	friend LongLongPrivate operator + (LongLongPrivate&, LongLongPrivate&);
	friend LongLongPrivate operator * (LongLongPrivate&, LongLongPrivate&);

	friend bool operator > (LongLongPrivate&, LongLongPrivate&);
	friend bool operator < (LongLongPrivate&, LongLongPrivate&);
	friend bool operator == (LongLongPrivate&, LongLongPrivate&);

	LongLongPrivate& operator ++ ();
	LongLongPrivate& operator -- ();
	LongLongPrivate operator ++ (int);
	LongLongPrivate operator -- (int);
};
