#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string input, rever, sum, sumrev;
	int output = 0;
	cin >> input;

	rever = input;
	reverse(rever.begin(), rever.end());

	if (input == rever) { cout << input.length(); return 0; }
	else {
		sum = input + rever;
		for (int i = input.length(); i < input.length() * 2; i++) {
			sumrev = sum;
			reverse(sumrev.begin(), sumrev.end());

			if (sum == sumrev) { output = sum.length(); }

			sum.erase(sum.begin() + input.length());
		}
	}
	
	cout << output;

	return 0;
}