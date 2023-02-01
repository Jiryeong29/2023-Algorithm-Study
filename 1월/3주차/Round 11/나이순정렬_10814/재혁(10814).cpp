#include<iostream>
#include<algorithm>
#include<vector>
#define endl '\n'

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main()
{
	int N;
	cin >> N;

	vector<pair<int, string>> arr;
	int x;
	string y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}
	stable_sort(arr.begin(), arr.end(), cmp);

	for (auto iter = arr.begin(); iter != arr.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	return 0;
}