#include <iostream>
using namespace std;

int Fibo(int n) {
	if (n == 0)			return 0;
	else if (n == 1)	return 1;
	else				return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cout << Fibo(n);
	return 0;
}