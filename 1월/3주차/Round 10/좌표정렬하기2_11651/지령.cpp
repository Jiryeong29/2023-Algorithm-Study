#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#define endl '\n'
using namespace std;


int main()
{
	int n, x, y;
	cin >> n;

	vector<pair<int, int>>v;

	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		v.push_back({ y,x });
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i) {
		cout << v[i].second << ' ' << v[i].first << endl;
	}
}
