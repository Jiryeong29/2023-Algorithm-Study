#include<iostream>
#include<algorithm>
using namespace std;

int divisor(int a, int b)
{
	int up = max(a, b);
	int down = min(a, b);
	int tmp = down;
	while (up % tmp != 0 || down % tmp != 0) {
		tmp--;
	}
	return tmp;
}

int main()
{
	int N;
	cin >> N;
	int* round = new int[N];
	for (int i = 0; i < N; i++) { cin >> round[i]; }
	for (int i = 1; i < N; i++) {
		int denominator = round[0] / divisor(round[0], round[i]);
		int numerator = round[i] / divisor(round[0], round[i]);
		cout << denominator << "/" << numerator << '\n';
	}

	return 0;
}