#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<math.h>
using namespace std;


int main()
{
	vector<int> v;
	int n, m;
	int s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
		
	}
	sort(v.begin(), v.end());
	cout << v[n - m] << endl;
	
}
