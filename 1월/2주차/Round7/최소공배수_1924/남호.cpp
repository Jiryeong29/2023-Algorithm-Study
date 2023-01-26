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

int main()
{
	
	
	int a, b;
	int n;
	int a1, b1;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		a1 = a;
		b1 = b;
		while (1)
		{
			if (a == 1 || b == 1) {
				arr[i] = a * b;
				break;
			}
			if (a1 > b1) {
				b1 += b;
			}
			else if (a1 < b1){
				a1 += a;
			}
			else if(a1 == b1){
				arr[i] = a1;
				break;
			}
		}
		
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}

}
