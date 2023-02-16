#include <iostream>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool visited[1001] = { false };

	int cnt = 0;
	int k, n;

	cin >> n >> k;

	for (int i = 2; i < 1001; i++)
	{
		if (!visited[i])
		{
			for (int j = 1; ; j++)
			{
				int temp = i * j;

				if (temp > n)
					break;

				if (visited[temp])
					continue;

				cnt++;
				visited[temp] = true;

				if (cnt == k)
				{
					cout << temp;
					return 0;
				}
			}
		}
	}
	return 0;
}