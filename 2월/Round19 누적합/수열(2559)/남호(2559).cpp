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

int arr[100005];
int max1 = -999;

int main() {

	ios::sync_with_stdio(false);    // cin과 cout을 동기화하지 않음
	cin.tie(NULL);    // cin과 cout의 묶음을 해제
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		int input;
		cin >> input;
		arr[i] = arr[i - 1] + input;
		
	}
	for (int i = n; i <= m; i++) {
		max1 = max(max1, arr[i] - arr[i - n]);
	}
	cout << max1 << endl;
}
