#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> v1;
vector <int> v2;

int binary(int check, int begin, int end) {

	int half = (begin + end) / 2;

	if (check > v1[end] || check < v1[begin]) { return 0; }

	else {
		if (check == v1[half]) { return 1; }

		else if (check > v1[half]) { return binary(check, half + 1, end); }

		else if (check < v1[half]) { return binary(check, begin, half - 1); }
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, in;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> in;
		v1.push_back(in);
	}

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> in;
		v2.push_back(in);
	}

	sort(v1.begin(), v1.end());

	
	for (int i = 0; i < M; i++) {
		int check = v2[i];

		cout << binary(check, 0, N - 1) << '\n';
	}

}