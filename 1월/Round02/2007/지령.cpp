#include <iostream>

using namespace std;

int Month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

const char* week[7] { "SUN","MON","TUE","WED","THU", "FRI","SAT" };


int main(void) {
	int InputMonth, InputDay;

	cin >> InputMonth>> InputDay;
	
	for (int i = 1; i < InputMonth; ++i) {
		InputDay+= Month[i];

	}

	cout << week[iDay % 7];


}