// 듣보잡 1746

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	int n, m, cnt = 0;
	cin >> n >> m;
	string str;
	set<string> s1;
	set<string> s2;

	for (int i = 0; i < n; i++) {
		cin >> str;
		s1.insert(str);
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (s1.find(str) != s1.end()) {
			s2.insert(str);
			cnt++;
		}
	}
	cout << cnt<<endl;
	for (auto i : s2) cout << i << endl;
}