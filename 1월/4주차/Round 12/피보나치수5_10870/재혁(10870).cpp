#include<iostream>
#define endl '\n'
using namespace std;

int fibo(int first, int second,int& cnt) {
	if (cnt == 0)return first;
	cnt--;
	return fibo(second, first + second, cnt);
}

int main()
{
	int num;
	cin >> num;
	
	cout << fibo(0, 1, num);

	return 0;
}