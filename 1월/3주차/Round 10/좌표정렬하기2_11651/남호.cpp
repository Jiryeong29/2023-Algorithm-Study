define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
using namespace std;

int main()
{
	int n, x, y;
	vector<pair<long long, long long>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back({ y, x });
	}
	sort(v.begin(), v.end());

	for (auto a : v) cout << a.second << " " << a.first << '\n';

	
}
