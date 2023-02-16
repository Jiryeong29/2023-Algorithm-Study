#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<string> v;
	string str;
	cin >> n;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		v.push_back(str);
	}

	bool flag = false;

	for (int i = 0; i < n; i++)
	{
		bool check[26] = { false };
		int len = v[i].length(); 

		for (int j = 0; j < len;) 
		{
			char temp = v[i][j];
			flag = false;

			if (check[temp - 'a'] == true)
			{
				flag = true;
				break;
			}
			
			while (j++ < len && temp == v[i][j]);

			check[temp - 'a'] = true;
		}
		if(!flag)
			count++;

	}
	cout << count;
}