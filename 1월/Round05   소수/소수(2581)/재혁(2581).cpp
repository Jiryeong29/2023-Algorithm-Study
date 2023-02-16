#include<iostream>
#include<cstring>
using namespace std;

int main()
{

	int Start, End;
	cin >> Start >> End;


	bool* PrimeNum = new bool[End+1];

	memset(PrimeNum, true, End+1);
	PrimeNum[0] = false;
	PrimeNum[1] = false;

	for (int i = 2; i <= End; i++)
	{
		if (PrimeNum[i])
			for (int j = i + i; j <= End; j += i)
				PrimeNum[j] = false;
	}


	int sum = 0;
	int min = 0;
	bool value = false;

	for (int i = Start; i <= End; i++)
	{
		if (PrimeNum[i])
		{
			if (!min)
			{
				min = i;
				value = true;
			}
			sum += i;
		}
	}


	if (value)
		cout << sum << '\n' << min;
	else cout << "-1";



	delete[] PrimeNum;

	return 0;
}