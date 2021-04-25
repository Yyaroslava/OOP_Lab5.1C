// LongLongPublic.cpp
#include "LongLongPublic.h"

LongLongPublic::LongLongPublic(): LongLong(0, 0) {}
LongLongPublic::LongLongPublic(long x = 0, long y = 0): LongLong(x, y) {}
LongLongPublic::LongLongPublic(LongLongPublic& A) : LongLong(A.GetX(), A.GetY()) {}

LongLongPublic& LongLongPublic::operator = (const LongLongPublic& A) {
	LongLong(A.GetX(), A.GetY());
	return *this;
}

ostream& operator << (ostream& out, const LongLongPublic& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, LongLongPublic& A) {
	double x, y;
	cout << "Enter high digit:  ";
	in >> x;
	cout << "Enter low digit: ";
	in >> y;
	A.SetX(x); A.SetY(y);
	return in;
}

LongLongPublic::operator string() const {
	stringstream ss;
	ss << "High digit: " << this->GetX() << endl;
	ss << "Low digit: " << this->GetY() << endl;
	return ss.str();
}

LongLongPublic operator +(LongLongPublic& A, LongLongPublic& B) {
	LongLongPublic t(A.GetX() + B.GetX(), A.GetY() + B.GetY());
	return t;
}

LongLongPublic operator * (LongLongPublic& A, LongLongPublic& B) {
	LongLongPublic t(A.GetX() * B.GetX(), A.GetY() * B.GetY());
	return t;
}

bool operator > (LongLongPublic& A, LongLongPublic& B) {
	return ((A.GetX() > B.GetX()) || (A.GetX() == B.GetX() && A.GetY() > B.GetY()));
}

bool operator < (LongLongPublic& A, LongLongPublic& B) {
	return ((A.GetX() < B.GetX()) || (A.GetX() == B.GetX() && A.GetY() < B.GetY()));
}

bool operator == (LongLongPublic& A, LongLongPublic& B) {
	return (A.GetX() == B.GetX() && A.GetY() == B.GetY());
}

LongLongPublic& LongLongPublic::operator ++ () {
	this->SetX(this->GetX() + 1);
	return *this;
}

LongLongPublic& LongLongPublic::operator -- () {
	this->SetX(this->GetX() - 1);
	return *this;
}

LongLongPublic LongLongPublic::operator ++ (int) {
	LongLongPublic t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}

LongLongPublic LongLongPublic::operator -- (int) {
	LongLongPublic t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}
