#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	set <int> S;
	set <int> ::iterator iterS;
	multiset <int> MS;
	multiset <int> ::iterator iterMS;
	vector <int> cnt(8001);
	int N, input, mid, fre = 0, comp = 0;
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> input;
		S.insert(input);
		MS.insert(input);
		cnt[input + 4000]++;
		sum = sum + input;
	}

	iterMS = MS.end();
	for (int i = 0; i < N/2 + 1; i++) {
		iterMS--;
	}
	mid = *iterMS;

	/*for (iterS = S.begin(); iterS != S.end(); iterS++) {
		if (MS.count(*iterS) > comp) {
			comp = MS.count(*iterS);
			fre = *iterS;
		}
	}

	iterS = S.begin();
	iterS++;
	for (iterS; iterS != S.end(); iterS++) {
		if (MS.count(*iterS) == comp) {
			fre = *iterS;
			break;
		}
	}*/

	for (int i = 0; i <= 8000; ++i) {
		if (cnt[i] > comp) {
			comp = cnt[i];
			fre = i;
		}
	}

	for (int i = fre + 1; i <= 8000; ++i) {
		if (cnt[i] == comp) {
			fre = i;
			break;
		}
	}

	sum = round(double(sum) / N);

	cout << sum << '\n';
	cout << mid << '\n';
	cout << fre - 4000 << '\n';
	cout << *MS.rbegin() - *MS.begin() << '\n';

	return 0;
}