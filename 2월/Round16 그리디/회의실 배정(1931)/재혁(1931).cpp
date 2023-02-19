#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
using namespace std;

vector<pair<int, int>> meeting;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)return a.first < b.first;
	return a.second < b.second;
}



int main()
{
	int N, start, end;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> start >> end;
		meeting.push_back(make_pair(start, end));
	}
	sort(meeting.begin(), meeting.end(), cmp);
	
	vector<pair<int, int>>::iterator it = meeting.begin();
	int count = 1;
	int tmp = it->second;
	it++;
	while (it != meeting.end()) {
		if (tmp <= it->first) {
			tmp = it->second;
			count++;
		}
		it++;
	}
	cout << count;

	



	return 0;
}