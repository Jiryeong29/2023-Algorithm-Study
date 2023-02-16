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

	// xi값이 작은 순서대로 xi값이 같으면 yi값이 작은 순서대로

	//vector<vector<int>> v(n);
	vector<pair<int, int>>v;

	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i) {
		cout << v[i].first << ' ' << v[i].second << endl;
	}
}
