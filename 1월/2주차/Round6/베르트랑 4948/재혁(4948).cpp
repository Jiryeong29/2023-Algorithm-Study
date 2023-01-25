#include<iostream>

using namespace std;

bool prime(int k)
{
	if (k == 2 || k == 3)return true;

	if (k % 2 == 0 || k == 1)return false;

	for (int i = 3; i * i < k+1; i ++)
	{
		if (k % i == 0)return false;
	}
	return true;
}




int main()
{
	
	int num;

	while (true)
	{
		cin >> num;
		if (num == 0)break;

		int count = 0;
		for (int i = num+1; i <= num * 2; i++)
		{
			if (prime(i))count++;
		}
		cout << count << '\n';
	}

	return 0;
}