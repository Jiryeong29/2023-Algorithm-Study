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


int fat(int n) {
	if (n > 1) return n * fat(n - 1);
	else return 1;
}


int main()
{	
	int n;
	cin >> n;
	cout << fat(n) << endl;
}
