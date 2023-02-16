#include<iostream>
#include<cstring>
using namespace std;

int end(int i)
{
	cout << i;
	return 0;
}


int main()
{

	int N, K;
	cin >> N >> K;
	bool* PrimeNum = new bool[N + 1];

	memset(PrimeNum, true, N + 1);

	for (int i = 2; i <= N; i++)
	{
		if (PrimeNum[i])
			K--;

		if (K == 0)return end(i);

		if (PrimeNum[i])
		{
			for (int j = i * i; j <= N; j += i)
			{
				if (PrimeNum[j])
				{
					PrimeNum[j] = false;
					K--;
				}
				if (K == 0)return end(j);
			}
		}

	}




	delete[] PrimeNum;

	return 0;
}