#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	multiset <int> MS;
	multiset <int> ::iterator iter;
	int N, k, input;

	cin >> N >> k;

	for (int i = 0; i < N; i++) {
		cin >> input;
		MS.insert(input);
	}

	iter = MS.end();

	for (int i = 0; i < k; i++) {
		iter--;
	}

	cout << *iter << '\n';

	return 0;
}