#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, tmp1 = 0;
	cin >> n;

	while (n >= 0) {
		if (n % 5 == 0) {	
			tmp1 += (n / 5);	
			cout << tmp1 << endl;
			return 0;
		}
		n -= 3;	
		tmp1++;
	}
	cout << -1 << endl;
}