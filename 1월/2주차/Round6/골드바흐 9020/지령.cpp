#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int t, n;
	cin >> t;

	vector < bool> v;
	v.assign(10002, true);

	for (int i = 2; i <= sqrt(10001); i++) {
		if (v[i] == true)
			for (int j = i * i; j <= 10001; j = j + i) {
				v[j] = false;
			}
	}
	
	while (t--) {
		cin >> n;

		for (int i = n / 2; i > 0; i--) {
			if (v[i] && v[n - i]) {
				cout << i << " " << n - i<<endl;
				break;
			}
		}

	}
	

}