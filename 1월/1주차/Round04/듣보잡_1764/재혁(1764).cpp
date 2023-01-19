#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<set>
#include<cstring>
using namespace std;


int main()
{
	int N, M;
	cin >> N >> M;

	map<string, int> name;

	string tmp;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		name.insert({ tmp, 0 });
	}


	int count = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		if (name.find(tmp) != name.end()) 
		{
			count++;
			name[tmp]++;
		}
	}

	cout << count << endl;
	for (auto iter = name.begin(); iter != name.end(); iter++)
	{
		if (iter->second > 0) 
		{ 
			cout << iter->first << endl; 
		}
	}



	return 0;

}