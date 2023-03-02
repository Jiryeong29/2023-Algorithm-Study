#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int k, n;
	int max = 0;

	cin >> k >> n;
	vector<int> v(k);

	for (int i = 0; i < k; i++)
	{
		cin >> v[i];
		if (max < v[i])
			max = v[i];
	}

	long long left = 1; // 자연수
	long long right = max;

	while (left <= right)
	{
		long long mid = (left + right) / 2;
		int cnt = 0;
		
		for (int i = 0; i < k; i++)
			cnt += v[i] / mid;

		if (cnt >= n)
			left = mid + 1;
		else
			right = mid - 1;
	}

	cout << left-1;

	return 0;
}