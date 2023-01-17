#include<iostream>
using namespace std;

int main()
{
	int Data[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string Week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	int Month, Day;
	int tmp = 1;

	cin >> Month >> Day;

	while (tmp < Month)
	{
		Day += Data[tmp - 1];
		tmp++;
	}
	tmp = (Day % 7) - 1;
	if (tmp == -1) { tmp = 6; }
	cout << Week[tmp];
	return 0;
}