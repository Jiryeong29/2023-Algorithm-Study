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

	long T, N, input;
	long count1 = 0;
	long count2 = 0;
	long sum = 0;
	cin >> T;

	vector <int> ring;

	while (count1 != T) {
		cin >> N;
		while (count2 != N) {
			cin >> input;
			ring.push_back(input);
			count2++;
		}

		for (int i = 0; i < N - 1; i++) {
			for (int j = i + 1; j < N; j++) {
				int x = Uclid(ring[i], ring[j]);
				sum = sum + x;
			}
		}

		cout << sum << '\n';
		ring.clear();
		count1++;
		count2 = 0;
		sum = 0;
	}

	return 0;
}