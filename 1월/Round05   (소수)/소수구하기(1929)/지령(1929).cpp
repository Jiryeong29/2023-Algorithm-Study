#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	vector<bool> v;
	int n, m;
	cin >> n >> m;
	v.assign(m + 1, true);

	v[0] = v[1] = false;

	for (int i = 2; i <= sqrt(m); i++) {
		if(v[i] == true)
			for (int j = i * i; j <= m; j = j + i) {
				v[j] = false;
			}
	}

	for (int i = n; i <= m; i++) {
		if (v[i] == true) {
			cout << i << endl;
		}
	}


}