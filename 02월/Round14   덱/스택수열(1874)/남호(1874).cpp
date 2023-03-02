#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
using namespace std;
int n, amx;
int cnt = 0;
int seq[100001];
vector<int> v;
vector<char> ans;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> seq[i]; 

	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
		ans.push_back('+');

		
		while (!v.empty() && v.back() == seq[cnt])
		{
			v.pop_back();
			ans.push_back('-');
			cnt++;
		}
	}

	if (!v.empty()) cout << "NO"; 
	else for (int i = 0; i < ans.size(); i++) cout << ans[i] << '\n';


}
