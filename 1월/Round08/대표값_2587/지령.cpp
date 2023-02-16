#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	vector<int> v(5);
	int avg=0;
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
		avg += v[i];
	}
	sort(v.begin(), v.end());
	cout << avg / 5 << endl;
	cout << v[2];
}