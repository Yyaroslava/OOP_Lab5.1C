// LongLong.cpp
#include "LongLong.h"
#include "BadException.h"

using namespace std;

void LongLong::SetX(long value) { x = value; }
void LongLong::SetY(long value) { y = value; }
long LongLong::GetX() const { return x; }
long LongLong::GetY() const { return y; }

LongLong::LongLong() { x = 0, y = 0; }

LongLong::LongLong(long x = 0, long y = 0) {
	if (x == 1 && y == 1)
		throw invalid_argument("Invalid_argument ");
	else if (x == 2 && y == 2)
		throw bad_exception();
	else if (x == 3 && y == 3)
		throw BadException("BadException ");
	else if (x == 4 && y == 4)
		throw "Exception ";
	this->x = x;
	this->y = y;
}

LongLong::LongLong(const LongLong& A) {
	x = A.GetX();
	y = A.GetY();
}

void LongLong::Read() {
	cout << "High digit =  ";
	cin >> x;
	cout << "Low digit =  ";
	cin >> y;
}

void LongLong::Display() {
	cout << "High digit: " << x << endl;
	cout << "Low digit: " << y << endl;
}

string LongLong::toString() const {
	stringstream sout;
	sout << "High digit " << GetX() << endl;
	sout << "Low digit " << GetY() << endl;
	return sout.str();
}
