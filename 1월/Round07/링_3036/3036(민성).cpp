#include <iostream>
#include <vector>
using namespace std;

int Uclid(int a, int b) {
	if (b == 0) { return a; }
	else { return Uclid(b, a % b); }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, R;
	int count = 0;
	cin >> N;
	vector <int> ring;
	
	while (count != N) {
		cin >> R;
		ring.push_back(R);
		count++;
	}

	for (int i = 1; i < N; i++) {
		int x = Uclid(ring[0], ring[i]);
		cout << ring[0] / x << "/" << ring[i] / x << '\n';
	}

	return 0;
}