#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n = 1, cnt = 0;
	vector<bool> v;
	while (1)
	{
		cnt = 0;
		cin >> n;
		if (n == 0) {
			break;
		}
		v.assign(2 * n + 1, true);
		v[0] = v[1] = false;

		for (int i = 2; i <= sqrt(2 * n); i++) {
			if (v[i] == true)
				for (int j = i * i; j <= 2 * n; j = j + i) {
					v[j] = false;
				}
		}

		for (int i = n + 1; i <= 2 * n; i++) {
			if (v[i] == true) {
				cnt++;
			}
		}
		v.clear();
		cout << cnt << endl;
	}
}