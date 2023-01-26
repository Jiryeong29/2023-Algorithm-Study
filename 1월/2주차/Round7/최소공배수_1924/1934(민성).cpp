#include <iostream>
using namespace std;

int Uclid(int a, int b) {
	if (b == 0) { return a; }
	else { return Uclid(b, a % b); }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, A, B;
	int count = 0;
	cin >> T;

	while (count != T) {
		cin >> A >> B;
		int x = Uclid(A, B);
		cout << (A * B) / x << '\n';
		count++;
	}

	return 0;
}