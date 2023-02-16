#include<iostream>

using namespace std;

bool Test(const string& str)
{
	int size = str.size();
	for (int i = 0; i < size; i++)
		if (str[i] != str[size - i - 1])
			return false;
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
		if (Test(str.substr(i)))
		{
			cout << str.size() + i << '\n';
			break;
		}
	return 0;
}