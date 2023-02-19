#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector <int> V;
	int N, input, output = 0;
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> input;
		V.push_back(input);
	}

	sort(V.begin(), V.end());

	for (int i = 0; i < N; i++) {
		sum = sum + V[i];
		output = output + sum;
	}

	cout << output;

	return 0;
}