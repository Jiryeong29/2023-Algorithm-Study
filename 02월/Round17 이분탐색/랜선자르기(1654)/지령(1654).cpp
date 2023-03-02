#include<bits/stdc++.h>

using namespace std;
#define endl '\n'

int n, k;
vector<long long> lan(10001);

bool check(long long mid) {
	long long cnt = 0;
	for (int i = 0; i < k; i++) {
		cnt += (lan[i] / mid);
	}
	return cnt >= n;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> k >> n;


	for (int i = 0; i < k; i++) {
		cin >> lan[i];
	}

	long long start = 1;
	long long end = *max_element(lan.begin(), lan.end());

	while (start <= end) {
		long long mid = (start + end) / 2;
		if (check(mid)) start = mid + 1;
		else end = mid - 1;
	}

	cout << end << endl;
}