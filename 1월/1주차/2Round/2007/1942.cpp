#include <iostream>
using namespace std;

int main() {
	int month;
	int day;
	int output;
	string DW[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	cin >> month;
	cin >> day;

	if (month == 1) {
		output = day % 7;
	}
	else if (month == 2) {
		output = (day + 31) % 7;
	}
	else if (month == 3) {
		output = (day + 31 + 28) % 7;
	}
	else if (month == 4) {
		output = (day + 31 + 28 + 31) % 7;
	}
	else if (month == 5) {
		output = (day + 31 + 28 + 31 + 30) % 7;
	}
	else if (month == 6) {
		output = (day + 31 + 28 + 31 + 30 + 31) % 7;
	}
	else if (month == 7) {
		output = (day + 31 + 28 + 31 + 30 + 31 + 30) % 7;
	}
	else if (month == 8) {
		output = (day + 31 + 28 + 31 + 30 + 31 + 30 + 31) % 7;
	}
	else if (month == 9) {
		output = (day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7;
	}
	else if (month == 10) {
		output = (day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7;
	}
	else if (month == 11) {
		output = (day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7;
	}
	else if (month == 12) {
		output = (day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7;
	}

	cout << DW[output] << endl;
	return 0;
}