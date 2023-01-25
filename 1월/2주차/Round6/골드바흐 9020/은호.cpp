#include <iostream>
#include <vector>

using namespace std;

#define MAX 10000

int arr[MAX + 1]{ 0 };

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int size;
	cin >> size;

	for (int i = 2; i <= MAX; i++)
		arr[i] = i;

	for (int i = 2; i * i <= MAX; i++)
	{
		if (arr[i] == 0)
			continue;

		for (int j = i * i; j <= MAX; j += i) // 4, 6, 8, 10 ... | 9, 12, 15 ... 소수가 아닌것들 0으로
			arr[j] = 0;
	}

	while (size--)
	{
		int n;
		cin >> n;

		vector<int> prime;
		for (int i = 2; i <= n; i++)
			if (arr[i] != 0)
				prime.push_back(arr[i]);

		for (int i = 0; i < prime.size(); i++)
			for (int j = 0; j <= i; j++)
				if (prime[i] + prime[j] == n)
				{
					cout << prime[j] << ' ' << prime[i] << '\n';
					goto HERE;
				}
	HERE:
		{}
	}

	return 0;
}