#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	set <string> Listen;
	set <string> Seen;
	set <string> LnS;
	set <string> ::iterator iter;
	int N, M, count = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		Listen.insert(input);
	}

	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		Seen.insert(input);
	}

	for (iter = Seen.begin(); iter != Seen.end(); iter++) {
		if (Listen.find(*iter) != Listen.end()) {
			count++;
			LnS.insert(*iter);
		}
	}

	cout << count << endl;

	for (iter = LnS.begin(); iter != LnS.end(); iter++) { cout << *iter << endl; }

	return 0;
}

//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	set <string> Listen;
//	set <string> Seen;
//	set <string> ::iterator iter;
//	int N, M, count = 0;
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		string input;
//		cin >> input;
//		Listen.insert(input);
//	}
//
//	for (int i = 0; i < M; i++) {
//		string input;
//		cin >> input;
//		Seen.insert(input);
//	}
//
//	//for (iter = Seen.begin(); iter != Seen.end(); iter++) {
//	//	if (Listen.find(*iter) != Listen.end()) {count++;}
//	//	else { Seen.erase(*iter); }
//	//}
//
//	for (iter = Listen.begin(); iter != Listen.end(); iter++) {
//		if (Seen.find(*iter) != Seen.end()) { count++; cout << *iter << endl; }
//		else { Seen.erase(*iter); }
//	}
//
//	cout << count << endl;
//
//	for (iter = Seen.begin(); iter != Seen.end(); iter++) {cout << *iter << endl;}
//
//	return 0;
//}