#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	vector<int> V(N);

	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}

	int cnt = 0;

	for (int i = N - 1; i >= 0; i--) {
		cnt = cnt + K / V[i];
		K = K % V[i];

		if (K == 0) break;
	}

	cout << cnt << endl;

	return 0;
}