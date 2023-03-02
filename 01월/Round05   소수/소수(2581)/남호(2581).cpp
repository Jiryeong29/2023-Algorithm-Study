#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;

int arr[10001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	int sum = 0;
	int min = 0;
	cin >> n >> m;
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= m; i++) {
		for (int j = i * 2; j <= m; j += i) {
			arr[j] = 1;
		}
	}
	for (int i = n; i <= m; i++) {
		if (arr[i] == 0) {
			min = i;
			break;
		}

	}
	for (int i = n; i <= m; i++) {
		if (arr[i] == 0) {
			sum += i;
		}
	}
	if (min == 0) {
		cout << -1 << endl;
	}
	else {
		cout << sum << endl;
		cout << min << endl;
	}
}
