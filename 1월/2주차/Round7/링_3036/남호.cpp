#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<math.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main()
{
	int n;
	int m;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		if (arr[0] > arr[i]) {
			m = gcd(arr[0], arr[i]);
		}
		else m = gcd(arr[i], arr[0]);

		cout << arr[0] / m << "/" << arr[i] / m << endl;
	}
	
}
