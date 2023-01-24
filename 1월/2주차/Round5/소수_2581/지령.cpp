#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, m, sum = 0, min = 0;
	cin >> n >> m;
	
	vector<bool> v;
	v.assign(m + 1, true);
	v[0] = v[1] = false;

	for (int i = 2; i <= sqrt(m); i++) {
		if(v[i] == true)
			for (int j = i * i; j <= m; j = j + i) {
				v[j] = false;
			}
	}
	bool b = true;
	for (int i = n; i <= m; i++) {
		if (v[i] == true) {

			if (b == true) {
				min = i;
				b = false;
			}
			sum += i;
		}
	}

	if (sum == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << endl << min;


}