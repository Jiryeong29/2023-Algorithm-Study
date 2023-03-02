#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#define endl '\n'    // endl 대신 '\n'을 사용
using namespace std;

int recur_cnt = 0;
int dynamic_cnt = 0;
int ar[44] = { 0, };

int fib(int a)
{
	if (a == 1 || a == 2)
	{
		recur_cnt++;
		return 1;
	}
	else
	{
		return fib(a - 1) + fib(a - 2);
	}
}

void fibonacci(int b)
{
	ar[1] = 1;
	ar[2] = 1;
	for (int i = 3; i <= b; i++)
	{
		dynamic_cnt++;
		ar[i] = ar[i - 1] + ar[i - 2];
	}
}


int main() {

	ios::sync_with_stdio(false);    
	cin.tie(NULL);    
	long long answer;
	int n;

	cin >> n;

	fib(n);
	fibonacci(n);

	cout << recur_cnt << " " << dynamic_cnt << "\n";

	return 0;
	
}
