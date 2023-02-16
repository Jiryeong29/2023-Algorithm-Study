#include <iostream>
using namespace std;

int fact(int N) {
	if (N <= 1) { return 1; }
	return N * fact(N - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, output;
	cin >> N;
	output = fact(N);
	cout << output << endl;

	return 0;
}