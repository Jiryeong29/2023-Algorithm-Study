// 숫자카드2_ 10816
// 틀린 코드 입니당 ㅠㅠ
// 수정중...
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;
int main() 
{
	int n, m;
	vector<int> v1;
	vector<int> v2;
	map<int, int> mp;

	cin >> n;
	v1.assign(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> v1[i];
	}
	cin >> m;
	v2.assign(m, 0);
	for (int i = 0; i < m; i++) {
		cin >> v2[i];
		mp.insert({ v2[i], 0});
	}
	for (int i = 0; i < n; i++) {
		if (mp.find(v1[i]) != mp.end()) {
			mp[v1[i]] += 1;
		}
	}
	for (int i = 0; i < m; i++) {
		cout << mp[v2[i]] << " ";
	}
}
