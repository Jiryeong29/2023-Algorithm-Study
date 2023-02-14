#include<iostream>
#include<set>
#define endl '\n'
using namespace std;


int main()
{
	int N, interval = 0;
	cin >> N >> interval;
	set<int> stack;
	for (int i = 0; i < N; i++) { stack.insert(i+1); }
	set<int>::iterator it = stack.begin()++;

	cout << "<";
	for (int i = 0; i < N; i++) {
		
		for (int k = 0; k < interval-1; k++) {
			if (it == stack.end()) { it = stack.begin(); }
			it++;
		}
		if (it == stack.end()) { it = stack.begin(); }

		cout << *it;
		if(i != N-1){ cout << ", "; }
		it = stack.erase(it);
	}
	cout << ">";
	return 0;
}