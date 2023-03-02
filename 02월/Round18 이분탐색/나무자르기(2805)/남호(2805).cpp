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
#define endl '\n'    // endl 대신 '\n'을 사용
using namespace std;


int main() {

	ios::sync_with_stdio(false);    // cin과 cout을 동기화하지 않음
	cin.tie(NULL);    // cin과 cout의 묶음을 해제

	long long n, m;
	long long tree1;
	long long start, end;
	long long cnt;
	long long mid;
	long long max = -999;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> tree1;
		v.push_back(tree1);
	}
	sort(v.begin(), v.end());
	start = 0;
	end = v.back();
	while (start <= end) {
		cnt = 0;
		mid = (start + end) / 2;

		for (int i = 0; i < n; i++) {
			if (v[i] - mid > 0) cnt += v[i] - mid;
		}
		if (cnt >= m) {
			start = mid + 1;
			if (mid > max) max = mid;
		}
		else end = mid - 1;
	}
	cout << max << endl;
}
