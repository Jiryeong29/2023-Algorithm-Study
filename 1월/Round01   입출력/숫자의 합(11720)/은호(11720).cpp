#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	int result = 0;
	for (int i = 0; i < n; i++)
		result += str[i] - '0';
	cout << result;
}