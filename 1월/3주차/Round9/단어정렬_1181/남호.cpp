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
	int n;
	string s;
	vector<string> v[51];
	bool check = false;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v[s.length()].push_back(s);
	}
	for (int i = 0; i < 51; i++) {
		sort(v[i].begin(), v[i].end());
		check = false;
		for (int j = 1; j <= v[i].size(); j++) {
			if (j == 1 ) {
				cout << v[i][0] << '\n';
			}
			if (j == v[i].size()) {
				break;
			}
			if (v[i][j-1] == v[i][j]) continue;
			cout << v[i][j] << '\n';
		}
	}
	
}
