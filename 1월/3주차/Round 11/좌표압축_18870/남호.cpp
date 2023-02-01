#define _CRT_SECURE_NO_WARNINGS
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
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
	int cnt = 0;
	
	cin >> n;
	map<long long, long long> map;
	vector<long long> v;
	vector<long long> v2;
	for (int i = 0; i < n; i++) {
		cin >> m;
		v.push_back(m);
		if (map[m]) continue;
		map[m];
		
	}
	for (auto i = map.begin(); i !=map.end(); i++) {
		i->second = cnt;
		cnt++;
	}
	for (int i = 0; i < n; i++) {
		v2.push_back(map[v[i]]);
	}
	for (auto a : v2) cout << a << '\n';
}
