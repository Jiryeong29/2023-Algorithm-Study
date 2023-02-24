#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int arr[100001];
int dp[100001];
int cmp = -99999999;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < K; i++) {
		sum = sum + arr[i];
	}

	dp[0] = sum - arr[0];
	cmp = sum;
	sum = 0;
	for (int i = 0; i < N - K; i++) {
		sum = dp[i] + arr[i + K];
		dp[i + 1] = sum - arr[i + 1];
		cmp = max(cmp, sum);
		sum = 0;
	}

	cout << cmp << endl;

	return 0;
}