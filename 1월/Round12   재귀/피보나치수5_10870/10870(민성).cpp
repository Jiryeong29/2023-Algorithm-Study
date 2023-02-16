#include <iostream>
using namespace std;

int pivot(int N) {
	if (N == 0) { return N; }
	else if (N == 1) { return N; }
	return pivot(N - 1) + pivot(N - 2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, output;

	cin >> N;
	output = pivot(N);

	cout << output << endl;

	return 0;
}