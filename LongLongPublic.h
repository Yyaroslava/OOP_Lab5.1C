// LongLongPublic.h
#pragma once
#include <iostream>
#include "LongLong.h"
#pragma pack(1)

class LongLongPublic : public LongLong {
public:
	LongLongPublic();
	LongLongPublic(long, long);
	LongLongPublic(LongLongPublic&);
		
	friend ostream& operator << (ostream&, const LongLongPublic&);
	friend istream& operator >> (istream&, LongLongPublic&);
	LongLongPublic& operator = (const LongLongPublic&);
	operator string() const;

	friend LongLongPublic operator + (LongLongPublic&, LongLongPublic&);
	friend LongLongPublic operator * (LongLongPublic&, LongLongPublic&);

	friend bool operator > (LongLongPublic&, LongLongPublic&);
	friend bool operator < (LongLongPublic&, LongLongPublic&);
	friend bool operator == (LongLongPublic&, LongLongPublic&);

	LongLongPublic& operator ++ ();
	LongLongPublic& operator -- ();
	LongLongPublic operator ++ (int);
	LongLongPublic operator -- (int);
};
