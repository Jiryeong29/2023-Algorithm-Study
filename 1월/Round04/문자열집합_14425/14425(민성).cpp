#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	set <string> NS;
	set <string> ::iterator iter;
	int N, M, count = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		NS.insert(input);
	}

	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		if (NS.find(input) != NS.end()) { count++; }
	}

	cout << count << endl;

	return 0;
}