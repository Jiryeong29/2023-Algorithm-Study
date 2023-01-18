#include <iostream>
using namespace std;

int main() {
	int t, hi, wi, in;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> hi >> wi >> in;
		int ho, wo;
		ho = in % hi;
		wo = in / hi;

		if (ho > 0) { wo++; }
		else {ho = hi;}

		cout << ho * 100 + wo << '\n';
	}

	return 0;
}
