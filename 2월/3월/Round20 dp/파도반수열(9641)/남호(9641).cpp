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

	ios::sync_with_stdio(false);    
	cin.tie(NULL);    
	long long arr[101] = { 0,1,1,1,2,2 };
	int n, m;
	cin >> n;
	while (n--) {
		cin >> m;
		for (int i = 6; i <= m; i++) {
			arr[i] = arr[i - 5] + arr[i - 1];
		}
		cout << arr[m] << endl;
	}

	
	
}
