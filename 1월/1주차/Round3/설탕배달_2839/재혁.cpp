#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int KG;
	cin >> KG;
	int tmp = 0;
	int count_3 = 0;

	while (KG >= 0)
	{
		if (KG % 5 == 0)
		{
			tmp = KG / 5;
			cout << tmp + count_3;
			return 0;
		}
		KG -= 3;
		count_3++;
	}
	cout << "-1";


	return 0;

}
