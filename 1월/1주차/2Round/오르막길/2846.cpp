#include <iostream>
using namespace std;

int main() {
	int n, sum = 0, sub, input, before, max = 0;
	
	cin >> n;
	cin >> before;

	for (int i = 0; i < n - 1; i++) {
		cin >> input;
		sub = input - before;
		before = input;

		if (sub > 0) {
			sum = sum + sub;
			if (max < sum) {
				max = sum;
			}
		}
		else {
			if (max < sum) {
				max = sum;
				sum = 0;
			}
			else {
				sum = 0;
			}
		}
	}
	cout << max;
	return 0;

}