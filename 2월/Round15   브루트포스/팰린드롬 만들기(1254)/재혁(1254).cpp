#include<iostream>
#include<cstring>
#include<utility>
#define endl '\n'
using namespace std;

bool check(string a) {
	for (int i = 0; i < a.length()/2; i++) {
		if (a[i] != a[a.length() - i - 1])return false;
	}
	return true;
}


int main()
{
	string s;
	cin >> s;

	int back = s.length();
	int ptr = 0;
	while (s.length() != 1) {
		int up = s.size() - 1;
		int down = 0;
		for (int i = 0; i < s.size() / 2 + 1; i++) {
			if (s[up] != s[down]) {
				s.insert(back,sizeof(char),s[ptr]);
				ptr++;
				break;
			}
			up--;
			down++;
		}
		if (check(s)) {
			cout << s.length();
			return 0;
		}
	}
	cout << 1;


	return 0;
}