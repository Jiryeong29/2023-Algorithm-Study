#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t;
	vector<int> v, r;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		v.push_back(t);
	}

	int result = 0;
	int temp = 0;

	for (int i=0; i < n-1; i++)
	{
		if (v[i] < v[i + 1])
			temp += v[i + 1] - v[i];
		else
		{
			result = max(result, temp);
			temp = 0;
		}
	}

	result = max(result, temp);
	cout << result;
	
	return 0;
}