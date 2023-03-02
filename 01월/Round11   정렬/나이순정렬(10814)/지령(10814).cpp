
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
bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int n, x;
	string y;
	cin >> n;

	vector<pair<int, string>> v;

	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		v.push_back({ x, y });
	}

	stable_sort(v.begin(), v.end(),compare);

	for (int i = 0; i < n; ++i) {
		cout << v[i].first << " " << v[i].second << endl;
	}
}
