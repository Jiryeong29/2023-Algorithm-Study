#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<set>
#include<cstring>
using namespace std;


int main()
{
	int target_num, list_num;
	cin >> target_num >> list_num;

	map<string, int> list;
	
	string tmp;
	for (int i = 0; i < target_num; i++)
	{
		cin >> tmp;
		list.insert({ tmp, 0 });
	}

	for (int i = 0; i < list_num; i++)
	{
		cin >> tmp;
		if (list.find(tmp) != list.end()) { list[tmp]++; }
	}

	int result = 0;
	for (auto iter = list.begin(); iter != list.end(); iter++)
	{
		result += iter->second;
	}

	cout << result;

	return 0;

}