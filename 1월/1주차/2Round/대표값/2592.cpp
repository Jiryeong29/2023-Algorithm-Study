#include <iostream>
#include <set>
using namespace std;

int main() {
	int max = 0, sum = 0, count = 0;
	float avg;
	set<int> s;
	set<int> ::iterator iter;
	multiset<int> ms;

	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;
		s.insert(input);
		ms.insert(input);
		sum = sum + input;
	}

	for (iter = s.begin(); iter != s.end(); iter++) {
		if (count < ms.count(*iter)) {
			count = ms.count(*iter);
			max = *iter;
		}
	}
	avg = sum / 10.0;
	cout << avg << endl;
	cout << max << endl;

	return 0;
}