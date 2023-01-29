#define _CRT_SECURE_NO_WARNINGS //sort는 퀵정렬 O(NlogN)
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
	vector<int> v;
	int n, m;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> m;
		v.push_back(m);
		sum += m;
	}
	sort(v.begin(), v.end());

	cout << sum / 5 << endl;
	cout << v[2] << endl;
}
