#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int blank;
	cin >> blank;
	for (int i = 0; i < blank; i++)
	{
		int max, min, tmp;
		cin >> min >> max;
		if (max < min)swap(min, max);
		tmp = max;

		while (tmp % min != 0) { tmp += max; }
		cout << tmp << '\n';
	}
	return 0;
}