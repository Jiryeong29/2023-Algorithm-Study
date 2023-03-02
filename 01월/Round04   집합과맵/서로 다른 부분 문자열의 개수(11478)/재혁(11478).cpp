#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
	string input;
	cin >> input;

	set<string> result;

	int len = strlen(input.c_str());
	for (int i = 1; i < len+1 ; i++)
	{
		int count = 0;
		while (input.c_str()[count + i - 1] != '\0')
		{
			result.insert(input.substr(count,i));
			count++;
		}
	}
	std::cout << result.size();

	return 0;

}