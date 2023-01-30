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
	vector<int> v;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		n = (int)s[i];
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	
	for (int i = v.size()-1; i >= 0; i--) {
		cout << v[i]-'0';
	}
	
}
