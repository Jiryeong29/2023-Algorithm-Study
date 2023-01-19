#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) 
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	map<string, int> strMap;
	vector<string> v;

	string str;

	for (int i = 0; i < n + m; i++)
	{
		cin >> str;
		if (strMap.insert({ str, i }).second == false)
			v.push_back(str);
	}

	sort(v.begin(), v.end());

	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	return 0;
}