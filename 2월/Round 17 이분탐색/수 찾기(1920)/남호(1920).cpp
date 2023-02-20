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

vector<int> v;

int binery(int start, int end, int target) {
	if (start > end) return 0;
	else {
		int mid = (start + end) / 2;
		if (v[mid] == target) return 1;

		else if (v[mid] > target) return binery(start, mid - 1, target);

		else return binery(mid + 1, end, target);
	}
}




int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	int target;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> target;
		v.push_back(target);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> target;
		cout << binery(0, n - 1, target) << '\n';
	}
}
