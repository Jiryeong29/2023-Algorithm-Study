#include<iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	int t;
	cin >> t;
	stack<char> s;

	while (t--)
	{
		cin >> str;
		s.push(str[0]);
		for (int i = 1; i < str.size(); i++)
		{
			if (str[i] == '(')
				s.push(str[i]);
			else if (str[i] == ')')
			{
				if (!s.empty() && s.top() == '(')
					s.pop();
				else
					s.push(str[i]);
			}
		}
		if (s.size() > 0)
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';
		while (s.size()  != 0)
			s.pop();
	}

	return 0;
}