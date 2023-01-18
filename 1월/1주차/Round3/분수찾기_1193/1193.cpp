#include <iostream>
using namespace std;

int main() {
	int x, i;
	cin >> x;

	for (i = 1; x > 0; i++) {x = x - i;}

	i -= 1;

	if (i % 2 == 1) {
		cout << i + 1 - (i + x) << '/' << i + x << endl;
	}
	else {
		cout << i + x << '/' << i + 1 - (i + x) << endl;
	}

	return 0;
}