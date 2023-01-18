#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
	int n;
	int h, w, p;
	int sum;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h >> w >> p;
		int h1;
		int w1;
		h1 = p % h;
		w1 = p / h + 1;
		if (h1 == 0) {
			h1 = h;
			w1 -= 1;
		}
		cout << h1 * 100 + w1 << endl;
	}
	
	
}
