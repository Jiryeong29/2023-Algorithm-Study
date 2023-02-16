#include <iostream>
using namespace std;

int main()
{
	int radix[10] = {};
	int n, r = 1;
	scanf("%d", &n);

	for (int i = 0; i<10; ++i)
	{
		if (n >= r)
		{
			radix[(n/r)%10]++;
			r *= 10;
		}
		else
			break;
	}

	for (int i = 9; i>=0; --i)
	{
		while(radix[i]-- != 0)
			printf("%d", i);
	}

	return 0;
}