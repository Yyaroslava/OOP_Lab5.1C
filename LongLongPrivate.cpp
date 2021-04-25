// LongLongPrivate.cpp 
#include "LongLongPrivate.h"

using namespace std;

LongLongPrivate::LongLongPrivate() : LongLong(0, 0) {}
LongLongPrivate::LongLongPrivate(long x = 0, long y = 0) : LongLong(x, y) {}
LongLongPrivate::LongLongPrivate(LongLongPrivate& A) : LongLong(A.GetX(), A.GetY()) {}

ostream& operator << (ostream& out, const LongLongPrivate& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, LongLongPrivate& A) {
	double x, y;
	cout << "Enter high digit: ";
	in >> x;
	cout << "Enter low digit: ";
	in >> y;
	A.SetX(x);
	A.SetY(y);
	return in;
}

LongLongPrivate& LongLongPrivate::operator = (const LongLongPrivate& A) {
	LongLong(A.GetX(), A.GetY());
	return *this;
}

LongLongPrivate::operator string() const {
	stringstream ss;
	ss << "High digit: " << this->GetX() << endl;
	ss << "Low digit: " << this->GetY() << endl;
	return ss.str();
}

LongLongPrivate operator+ (LongLongPrivate& A, LongLongPrivate& B) {
	LongLongPrivate t(A.GetX() + B.GetX(), A.GetY() + B.GetY());
	return t;
}

LongLongPrivate operator* (LongLongPrivate& A, LongLongPrivate& B) {
	LongLongPrivate t(A.GetX() * B.GetX(), A.GetY() * B.GetY());
	return t;
}

bool operator > (LongLongPrivate& A, LongLongPrivate& B) {
	return ((A.GetX() > B.GetX()) || (A.GetX() == B.GetX() && A.GetY() > B.GetY()));
}

bool operator < (LongLongPrivate& A, LongLongPrivate& B) {
	return ((A.GetX() < B.GetX()) || (A.GetX() == B.GetX() && A.GetY() < B.GetY()));
}

bool operator == (LongLongPrivate& A, LongLongPrivate& B) {
	return (A.GetX() == B.GetX() && A.GetY() == B.GetY());
}

LongLongPrivate& LongLongPrivate::operator ++ () {
	this->SetX(this->GetX() + 1);
	return *this;
}

LongLongPrivate& LongLongPrivate::operator -- () {
	this->SetX(this->GetX() - 1);
	return *this;
}

LongLongPrivate LongLongPrivate::operator ++ (int) {
	LongLongPrivate t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}

LongLongPrivate LongLongPrivate::operator -- (int) {
	LongLongPrivate t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}
