#include<iostream>
#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, a, b;
	int count = 1;
	int next = 0;
	cin >> n;

	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back({ b, a });
	}

	sort(v.begin(), v.end());

	int cur = v[0].first;
	for (int i = 1; i < n; i++)
	{
		if (cur <= v[i].second)
		{
			count++;
			cur = v[i].first;
		}
	}

	cout << count;
	system("pause");

	return 0;
}