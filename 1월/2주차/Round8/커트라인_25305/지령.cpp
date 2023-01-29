#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), greater<>());
	cout << v[k - 1];
}