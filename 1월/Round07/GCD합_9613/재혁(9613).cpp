#include<iostream>
#include<algorithm>
using namespace std;

int GCD(long a, long b)
{
	long up = max(a, b);
	long down = min(a, b);
	long tmp = down;
	while (up % tmp != 0 || down % tmp != 0) {
		tmp--;
	}
	return tmp;
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		long* arr = new long[n];
		for (int j = 0; j < n; j++) { cin >> arr[j]; }

		long tmp = 0;
		for (int j = 0; j < n; j++) {
			for (int k = n - 1; k > j; k--) {
				tmp += GCD(arr[j], arr[k]);
			}
		}
		cout << tmp << '\n';
		delete[] arr;
	}
	return 0;
}