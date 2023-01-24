#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	int Num, N;
	cin >> Num;

	int* arr = new int[Num];
	for (int i = 0; i < Num; i++)
	{
		cin >> N;
		arr[i] = N;
	}

	int size = N * 1.1;//////////////////////////
	bool* Prime = new bool[size];
	memset(Prime, true, size);

	for (int i = 2; i <= size; i++)
	{
		if (Prime[i])
			for (int j = i * i; j <= size; j += i)
				Prime[j] = false;
	}

	for (int i = 0; i < Num; i++)
	{
		int k = 0;
		while (true)
		{
			if (arr[i] < k && Prime[k])break;
			k++;
		}
		cout << k << '\n';
	}


	return 0;
}