#include<iostream>

using namespace std;

bool prime(int k)
{
	if (k == 2 || k == 3)return false;

	if (k % 2 == 0 || k == 1)return true;

	for (int i = 3; i * i < k+1; i ++)
	{
		if (k % i == 0)return true;
	}
	return false;
}




int main()
{
	
	int num;
	cin >> num;


	for (int i = 0; i < num; i++)
	{
		int N;
		cin >> N;

		int ans1 = N / 2, ans2 = N / 2;

		while (prime(ans1) || prime(ans2))
		{
			if (ans1 % 2 == 0)
			{
				ans1 -= 1;
				ans2 += 1;
			}
			else
			{
				ans1 -= 2;
				ans2 += 2;
			}
		}

		cout << ans1 << " " << ans2 << '\n';

	}

	return 0;
}