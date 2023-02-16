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
int arr[123456 * 2 + 1];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int sum = 0;
	while (1) {
		cin >> n;
		
		arr[0] = 1;
		arr[1] = 1;
		sum = 0;
		if (n == 0) {
			break;
		}
		for (int i = 2; i <= 2 * n; i++) {
			for (int j = i * 2; j <= 2 * n; j += i) {
				arr[j] = 1;
				
			}
		}
		for (int i = n + 1; i <= 2 * n; i++) {
			if (arr[i] == 0) {
				sum++;
			}
		}
		cout << sum << '\n';	
	}
	
}
