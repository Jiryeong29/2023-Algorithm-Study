#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int weight[51];
	int height[51];
	int output[51];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> weight[i] >> height[i];
	}

	for (int i = 0; i < N; i++) {
		output[i] = 1;
		for (int j = 0; j < N; j++) {
			if (weight[i] < weight[j] && height[i] < height[j]) { output[i] += 1; }
		}
	}

	for (int i = 0; i < N; i++) {
		cout << output[i] << " ";
	}

	return 0;
}