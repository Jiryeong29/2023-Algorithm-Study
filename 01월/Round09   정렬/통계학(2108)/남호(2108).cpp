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
	double n;
	double m;
	double sum = 0;
	double max = 0;
	double mo = 0;
	int cnt = 0;
	vector<double> v;
	map<double, double> map;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		v.push_back(m);
		map[m]++;
		sum += m;
	}
	//최빈값
	for(auto itor = map.begin(); itor !=map.end(); itor++) {
		if (max < itor->second) {
			max = itor->second;
		}
	}
	for (auto itor = map.begin(); itor != map.end(); itor++) {
		if (max == itor->second) {
			cnt++;
			mo = itor->first;
		}
		if (cnt == 2) {
			mo = itor->first;
			break;
		}
	}
	sort(v.begin(), v.end());
	if (round(sum / n) == -0) {
		cout << 0 << '\n';
	}
	else cout << round(sum / n) << '\n';
	cout << v[n / 2] << '\n';
	cout << mo << '\n';
	cout << v[n-1] - v[0] << '\n';
	
	
}
