#include<iostream>
#include <vector>

using namespace std;

int GCD(int x, int y)
{
	if (y == 0) return x;
	return GCD(y, x % y);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		std::vector<int> v(n);

		for (int i = 0; i < n; i++)
			cin >> v[i];

		long long ans = 0;

		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				ans += GCD(v[i], v[j]);

		cout << ans << '\n';
	}

	return 0;
}