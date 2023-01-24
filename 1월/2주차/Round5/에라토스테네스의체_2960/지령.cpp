#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	vector<bool> v;
	int n, k, cnt = 0 , result=0;
	cin >> n >> k;
	v.assign(n + 1, true);

	v[0] = v[1] = false;

	for (int i = 2; i <= n; i++) {
		if (v[i] == true)
			++cnt;
			if (cnt == k) {
				result = i;
				break;
			}
			for (int j = i * i; j <= n; j = j + i) {
				++cnt;
				v[j] = false;
				if (cnt == k) {
					result = j; 
					break;
				}
			}
	}

	

	cout << result;

}