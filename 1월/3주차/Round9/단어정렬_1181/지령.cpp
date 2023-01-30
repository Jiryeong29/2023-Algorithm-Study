#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
// 길이가 같으면 사전순으로 비교
bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main(void) {

	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	string tmp;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		// 중복된 단어 체크
		if (find(v.begin(), v.end(), tmp) == v.end())
			v.push_back(tmp);
	}
	sort(v.begin(), v.end(), compare);
	
	cout << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<<endl;
	}
	
}