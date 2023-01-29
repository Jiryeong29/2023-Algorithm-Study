#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	multiset <int> MS;
	multiset <int> ::iterator iter;
	int input;
	int sum = 0;
	

	for (int i = 0; i < 5; i++) {
		cin >> input;
		sum = sum + input;
		MS.insert(input);
	}

	iter = MS.begin();
	iter++;
	iter++;

	cout << sum / 5 << '\n';
	cout << *iter << '\n';

	return 0;
}