#include<iostream>
#include<algorithm>
#include<vector>
#define endl '\n'

using namespace std;

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
	sort(arr.begin(), arr.end());

	for (auto iter = arr.begin(); iter != arr.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	return 0;
}