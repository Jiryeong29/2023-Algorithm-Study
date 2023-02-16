#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;

int arr[1001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	int p = 0;
	int cnt = 0;
	bool check = false;
	scanf("%d %d", &n, &m);
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			if (arr[j] == 0) {
				arr[j] = 1;
				cnt++;
				
			}
			if (cnt == m) {
				p = j;
				cout << p << endl;
				return 0;
			}
		}
		
	}

	
	
}
