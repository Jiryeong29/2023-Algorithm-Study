#include<iostream>
#include<algorithm>
#include<vector>
#define endl '\n'

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second)return a.first < b.first;
	return a.second < b.second;
}


int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> arr;
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}
	sort(arr.begin(), arr.end(),cmp);

	for (auto iter = arr.begin(); iter != arr.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	return 0;
}