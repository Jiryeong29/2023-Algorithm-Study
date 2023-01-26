// 링_3036

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int GDC(int a,int b) {
	if (b == 0) {
		return a;
	}
	else
		return GDC(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, a, b;
	cin >> n;
	vector<int> v;
	v.assign(n, 0);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	
	for (int i = 1; i < n; ++i) {
		int gdc = GDC(v[0], v[i]);
		cout << v[0] / gdc << "/" << v[i] / gdc << endl;
	}

	return 0;
}