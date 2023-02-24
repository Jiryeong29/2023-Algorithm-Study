#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int n, c;
	cin >> n >> c;
	int input;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	// 1 2 4, n=3, c=2
	sort(v.begin(), v.end());

	int left = 0; 
	int right = v.back(); 
	int ans = -1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		int beforeSetIdx = 0; 
		int cnt = 1;

		for (int idx = 1; idx < n; idx++)
		{
			if (v.at(idx) - v.at(beforeSetIdx) >= mid)
			{
				beforeSetIdx = idx;
				cnt++;
			}
		}

		if (cnt >= c)  
		{ // 간격 늘리기
			ans = mid;
			left = mid + 1;
		}
		else // 간격 좁히기
			right = mid - 1;
	}

	cout << ans;

	return 0;
}