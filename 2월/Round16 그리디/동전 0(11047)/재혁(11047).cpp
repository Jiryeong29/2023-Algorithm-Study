#include<iostream>
#include<list>
#define endl '\n'
using namespace std;

list<int> unit;

int main()
{
	int N, K;
	int tmp;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		unit.push_front(tmp);
	}

	int count = 0;
	for (auto x : unit) {
		if (K < x) {
			continue;
		}
		count += K / x;
		K %= x;
	}
	cout << count;

	return 0;
}