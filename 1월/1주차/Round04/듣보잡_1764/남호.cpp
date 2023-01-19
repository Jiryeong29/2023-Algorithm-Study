#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	map<string, int>m;
	int n;
	int n2;
	string s;
	int sum = 0;
	cin >> n >> n2;
	for (int i = 0; i < n; i++) {
		cin >> s;
		m[s] = 0;
	}
	for (int i = 0; i < n2; i++) {
		cin >> s;
		if (m.count(s) == 1) {
			m[s]++;
			sum++;
		}
	}
	cout << sum << endl;
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		if (iter -> second == 1) {
			cout << iter->first << endl;
		}
	}

}
