// lab5.1C.cpp 
#include <iostream>
#include "BadException.h"
#include "LongLongPublic.h"
#include "LongLongPrivate.h"

using namespace std;

int main() {
	LongLongPublic A1, B1, C1;

	try {
		cout << "A1: " << endl;
		cin >> A1;
		cout << "B1: " << endl;
		cin >> B1;

		cout << "A1 + B1: " << endl;
		cout << A1 + B1 << endl;

		cout << "A1 * B1: " << endl;
		cout << A1 * B1 << endl;

		cout << "A > B " << endl;
		if (A1 > B1) cout << "Yes " << endl;
		else cout << "No " << endl;

		cout << "A < B " << endl;
		if (A1 < B1) cout << " Yes " << endl;
		else cout << "No " << endl;

		cout << "A == B " << endl;
		if (A1 == B1) cout << " Yes " << endl;
		else cout << "No " << endl;
		
		cout << "A1++ " << endl;
		cout << A1++ << endl;
		cout << "A1-- " << endl;
		cout << A1-- << endl;
		cout << "++A1 " << endl;
		cout << ++A1 << endl;
		cout << "--A1 " << endl;
		cout << --A1 << endl;
	}
	catch (invalid_argument e) {
		cout << e.what() << endl;
	}
	catch (bad_exception e) {
		cout << e.what() << endl;
	}
	catch (BadException& e) {
		cout << e.what() << endl;
	}
	catch (const char* e) {
		cerr << e << endl;
	}

	LongLongPrivate A2, B2, C2;

	try {
		cout << "A2: " << endl;
		cin >> A2;
		cout << "B2: " << endl;
		cin >> B2;

		cout << "A2 + B2: " << endl;
		cout << A2 + B2 << endl;

		cout << "A2 * B2: " << endl;
		cout << A2 * B2 << endl;

		cout << "A > B " << endl;
		if (A2 > B2) cout << "Yes " << endl;
		else cout << "No " << endl;

		cout << "A < B " << endl;
		if (A2 < B2) cout << "Yes " << endl;
		else cout << "No " << endl;

		cout << "A == B " << endl;
		if (A2 == B2) cout << "Yes " << endl;
		else cout << "No " << endl;

		cout << "A2++ " << endl;
		cout << A2++ << endl;
		cout << "A2-- " << endl;
		cout << A2-- << endl;
		cout << "++A2 " << endl;
		cout << ++A2 << endl;
		cout << "--A2 " << endl;
		cout << --A2 << endl;
	}
	catch (invalid_argument e) {
		cout << e.what() << endl;
	}
	catch (bad_exception e) {
		cout << e.what() << endl;
	}
	catch (BadException& e) {
		cout << e.what() << endl;
	}
	catch (const char* e) {
		cerr << e << endl;
	}

	return 0;
}
