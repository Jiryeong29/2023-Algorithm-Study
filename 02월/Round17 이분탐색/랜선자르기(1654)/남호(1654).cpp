//이해 안돼서 인터넷 참고 했습니다.
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
int K, N, ans;
int line[10001];
int  maxi = 0;
long long mid, high, low;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> K >> N;

	for (int i = 0; i < K; i++)
	{
		cin >> line[i];
		if (maxi < line[i]) maxi = line[i];
	}
	low = 1;
	high = maxi;
	ans = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;
		int cnt = 0;
		for (int i = 0; i < K; i++)
			cnt += line[i] / mid;

		if (cnt >= N) {
			low = mid + 1;
			if (ans < mid) ans = mid;
		}
		else {// (cnt < N)
			high = mid - 1;
		}
	}

	cout << ans;
}
