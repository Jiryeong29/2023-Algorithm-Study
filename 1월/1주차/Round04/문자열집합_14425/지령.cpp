// 문자열집합 14425
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	int n, m,cnt=0;
	cin >> n >> m;
	string str;
	set<string> s1;	

	for (int i = 0; i < n; i++) {
		cin >> str;
		s1.insert(str);
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (s1.find(str) != s1.end()) {
			cnt++;
		}
	}
	cout << cnt;
}
