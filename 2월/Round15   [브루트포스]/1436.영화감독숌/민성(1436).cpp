#include <iostream>
#include<string>
using namespace std;

void doom(int N) {
	int count = 1;
	int num = 666;
	string str;
	while (count < N + 1) {
		str = to_string(num);

		if (str.find("666") != string::npos) {
			count++;
		}
		num++;
	}
	cout << num - 1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	doom(N);

	return 0;
}