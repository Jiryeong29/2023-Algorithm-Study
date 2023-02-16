//10250
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	
	int t, h, w, n, x, y;
	cin >> t;
	
	for (int i = 0; i < t; ++i) {  
		cin >> h >> w >> n;	

		x = n % h;
		y = n / h + 1;

		if (x == 0) x = h;
		if (!(n % h)) y -= 1;

		cout << x * 100 + y << endl;
	}


}