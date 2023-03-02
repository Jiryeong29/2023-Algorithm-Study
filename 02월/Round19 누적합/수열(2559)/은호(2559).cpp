#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	int start = 0, end = k - 1;
	int sum = 0;

	for (int i = 0; i <= end; i++)
		sum += v[i];

	int ans = sum;

	while (++end < n)
	{
		sum -= v[start++];
		sum += v[end];
		ans = max(ans, sum);
	}

	cout << ans;

	return 0;
}