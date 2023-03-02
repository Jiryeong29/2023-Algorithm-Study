#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {
	int n;
	int start, end;
	int cnt = 1;
	int end2 = 0;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> start >> end;
		v.push_back(make_pair(end, start));
	}
	sort(v.begin(), v.end());
	end2 = v[0].first;
	for (int i = 1; i < v.size(); i++) {
		if (end2 <= v[i].second) {
			end2 = v[i].first;
			//cout << "heloow:" << v[i].first << " " << v[i].second << endl;
			cnt++;
		}
	}
	cout << cnt << endl;
}
