#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	set <int> S;
	set <int> ::iterator iter;
	int N, input;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> input;
		S.insert(input);
	}

	for (iter = S.begin(); iter != S.end(); iter++) {
		cout << *iter << '\n';
	}

	return 0;
}