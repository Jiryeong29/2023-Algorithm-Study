#include <iostream>
#include <cstring>
using namespace std;

int main()
{
		int n, m;
		cin >> m >> n;

		int* arr = new int[n+1];
		memset(arr, 0, (n+1)*sizeof(int));

		for (int i = 2; i*i<=n; i++)
			if (*(arr+i) == 0)
				for (int j = i*2; j<=n; j += i)
					*(arr+j) = 1;

		for (int i = m; i<=n; i++)
			if (*(arr+i) == 0 && i != 1)
				cout << i << '\n';

	return 0;
}