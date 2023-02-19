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
	int n, m, s;
	int sum;
	int cnt = 0;
	cin >> n >> m;
	sum = m;
	vector <int> v;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}
	
		for (int i = v.size() - 1; i >= 0; i--) {
				cnt += sum / v[i];
				sum -= (sum / v[i]) * v[i];
			if (sum == 0) {
				break;
			}		
	}
		cout << cnt << '\n';
}
