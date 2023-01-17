#include<iostream>

using namespace std;



int main()
{
	int DataNum, CmpData;
	int tmp = 0;
	int input = 0;
	int Hight = 0;

	cin >> DataNum >> CmpData;
	for (int i = 1; i < DataNum; i++)
	{
		cin >> input;
		if (CmpData < input) { tmp += input - CmpData; }
		else { tmp = 0; }

		if (tmp > Hight) { Hight = tmp; }
		
		CmpData = input;
	}
	cout << Hight;

	return 0;
}
