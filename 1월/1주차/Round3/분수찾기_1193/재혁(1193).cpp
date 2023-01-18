#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int input;
	cin >> input;


	int num = 1;
	while (input > num)
	{
		input -= num;
		num++;
	}


	int front = 1,last = num;
	for (int i = 0; i < input-1; i++)
	{
		last--;
		front++;
	}


	if (num % 2 == 0) { cout << front << "/" << last; }
	else { cout << last << "/" << front; }

	return 0;
}