#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;

vector <int> V;
vector <int> VS;

int PrefixSum(int a, int b) {
	if (a <= 1) { return VS[b - 1]; }
	else { return VS[b - 1] - VS[a - 2]; }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	int N, M, sum = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		sum += input;
		V.push_back(input);
		VS.push_back(sum);
	}

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		cout << PrefixSum(a, b) << '\n';
	}
}