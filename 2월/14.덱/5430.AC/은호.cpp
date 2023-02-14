#include<iostream>
#include <vector>
#include <stack>
#include <deque>

using namespace std;

void R(deque<int>& v)
{
	int j = 0;
	deque<int> v2 = v;
	for (int i = v2.size() - 1; i >= 0; i--)
		v[j++] = v2[i];
}

bool D(deque<int>& v, bool reversed)
{
	if (v.size() == 0)
		return false;

	if (reversed)
		v.pop_back();
	else
		v.pop_front();

	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	deque<int> v;
	string arr, p;
	stack<char> temp;
	int t, n, result = 0;
	cin >> t;
	
	while (t--)
	{
		cin >> p;
		cin >> n;
		cin >> arr;
		for (int i = 0; i < arr.size(); i++)
		{
			if ('0' <= arr[i] && arr[i] <= '9')
				temp.push(arr[i]);
			else
			{
				int m = 1;
				while (!temp.empty())
				{
					char top = temp.top();
					result += atoi(&top) * m;
					temp.pop();
					m *= 10;
					if(temp.empty())
						v.push_back(result);
				}
				result = 0;
			}
		}

		bool reversed = false;
		bool flag = false;

		for (int i = 0; i < p.size(); i++)
		{
			if (p[i] == 'R')
			{
				reversed = !reversed;
				
			}
			else if (p[i] == 'D')
				if (D(v, reversed) == false)
				{
					cout << "error" << '\n';
					flag = true;
					break;
				}
		}

		if (reversed)
			R(v);

		if (!flag)
		{
			cout << '[';
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i] << ((i == v.size() - 1) ? "" : ",");
			}
			cout << ']' << '\n';
		}
		v.clear();
	}
	system("pause");


	return 0;
}