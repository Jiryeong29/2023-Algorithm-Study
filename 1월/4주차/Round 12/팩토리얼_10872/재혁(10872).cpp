#include<iostream>
#define endl '\n'

using namespace std;

int main()
{
	int num, result = 1;;
	cin >> num;
	for (int i = 1; i < num + 1; i++)
		result *= i;
	cout << result;

	return 0;
}