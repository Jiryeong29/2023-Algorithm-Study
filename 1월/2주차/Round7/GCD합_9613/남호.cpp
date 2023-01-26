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

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	return gcd(b, a % b);
}

int main()
{
	int n;
	int m;
	cin >> n;
	long long* sum = new long long[n]();
	long long arr[101] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> m;
		
		for (int j = 0; j < m; j++) {
			cin >> arr[j];
		}
		for (int k = 0; k < m; k++) {
			for (int p = k + 1; p < m; p++) {
				sum[i] += gcd(arr[k], arr[p]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << sum[i] << endl;
	}
	
}
