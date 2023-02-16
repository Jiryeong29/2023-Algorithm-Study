#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	
	while (n>=0) {
		if (n % 5 == 0) {
			sum += n / 5;
			cout << sum << endl;
			return 0;
		}
		else {
			n -= 3;
			sum++;
		}
	}
	cout << -1 << endl;
}
