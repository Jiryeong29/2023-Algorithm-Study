#pragma warning(disable : 4996)

#include<iostream>
#include<algorithm>
#include<cstring>
#define endl '\n'
using namespace std;

bool comp(char a, char b) {
	return a > b;
}

int main()
{
	char tmp[11];
	cin >> tmp;
	sort(tmp, tmp+strlen(tmp), comp);
	cout << tmp;

	return 0;
}