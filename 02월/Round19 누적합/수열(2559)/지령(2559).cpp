#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'

int main(void) {

	int n, k, sum = 0, imax;
	cin >> n >> k;
	vector<int> A(n);
	vector < int > P(n - k + 1);


	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < k; i++) {
		sum += A[i];
	}

	P[0] = sum;
	imax = P[0];
	for (int i = 1; i < n - k + 1; i++) {

		P[i] = P[i - 1] + A[i + k - 1] - A[i - 1];
		
	}
	for (int i = 0; i < n - k + 1; i++) {
		imax = max(imax, P[i]);
	}

	cout << imax;
	return 0;
}