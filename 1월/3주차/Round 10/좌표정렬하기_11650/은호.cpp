#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
		cout << v[i].first << ' ' << v[i].second << '\n';

	return 0;
}