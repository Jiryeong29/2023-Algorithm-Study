// GDC합_9613
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

	long t, n, a, b,sum=0;
	cin >> t;

	vector<int> v;
	

	for (int i = 0; i < t; i++)
	{
		sum = 0;
		cin >> n;
		v.assign(n, 0);
		for (int j = 0; j < n; ++j) {
			cin >> v[j];
		}
		
		for (int j = 0; j < n-1; j++) {

			for (int k = j+1; k < n; k++) {
				int gdc = GDC(v[j], v[k]);
				sum += gdc;
			}
		}

		cout << sum << endl;
		v.clear();
	}

	
}