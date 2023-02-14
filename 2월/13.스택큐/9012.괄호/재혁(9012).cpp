#include<iostream>
#include<stack>
#define endl '\n'
using namespace std;

bool VPS(string s) {
	stack<char> VPS;

	for (int k = 0; k < s.size(); k++) {
		if (s[k] == '(') {
			VPS.push(s[k]);
		}
		else if (s[k] == ')' && VPS.size() != 0) {
			VPS.pop();
		}
		else { return false; }
	}
	if (VPS.size() == 0) {
		return true;
	}
	return false;
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;

		if (VPS(tmp)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}