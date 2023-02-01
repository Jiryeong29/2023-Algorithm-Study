#include<iostream>
#include<algorithm>
#include<vector>
#define endl '\n'

using namespace std;

bool cmp(pair<long long, int> a, pair<long long, int> b) {
	return a.second < b.second;
}


int main()
{
	int N;
	cin >> N;

	vector<pair<long long, int>> input;
	long long tmp;
	int cnt = 0, m = 0;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		input.push_back(make_pair(tmp, cnt));
		cnt++;
	}

	sort(input.begin(), input.end());
	tmp = 0;
	cnt = -1;
	for (auto iter = input.begin(); iter != input.end(); iter++) {
		if (iter->first != tmp) {
			tmp = iter->first;
			cnt++;
		}
		iter->first = cnt;
	}
	
	sort(input.begin(), input.end(), cmp);

	for (auto iter = input.begin(); iter != input.end(); iter++) {
		cout << iter->first << ' ';
	}

	return 0;
}