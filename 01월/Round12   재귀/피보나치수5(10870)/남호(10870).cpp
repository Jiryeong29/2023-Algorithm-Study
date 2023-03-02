#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
using namespace std;


int fibo(int n) {
	if (n >= 2) return fibo(n - 1) + fibo(n - 2);
	else if (n == 1) return 1;
	else return 0;
}


int main()
{	
	int n;
	cin >> n;
	cout << fibo(n) << endl;
}
