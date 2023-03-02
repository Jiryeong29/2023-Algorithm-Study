// 문자열집합 14425
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false); // 이거 없으니까 시간초과
	cin.tie(0);
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
