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

bool Prime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		sum = m / 2;
		while (1) {
			if (Prime(sum) && Prime(m - sum)) {
				cout << sum << " " << m - sum << '\n';
				break;
			}
			sum--;
		}
	}	
}
