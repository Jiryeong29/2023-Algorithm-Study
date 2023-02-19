#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool sorting(pair<int, int> x, pair<int, int> y) {
	if (x.second == y.second) { return x.first < y.first; }
	return x.second < y.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector <pair<int,int>> V;
	pair <int, int> P;
	int N, in1, in2, cmp, output = 1;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> in1 >> in2;
		P = make_pair(in1, in2);
		V.push_back(P);
	}

	sort(V.begin(), V.end(), sorting);

	cmp = V[0].second;

	for (int i = 1; i < N; i++) {
		if (cmp <= V[i].first) {
			cmp = V[i].second;
			output++;
		}
	}

	cout << output;

	return 0;
}