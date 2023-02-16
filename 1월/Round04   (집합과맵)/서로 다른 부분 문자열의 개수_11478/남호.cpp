#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int sum = 0;
	set<string> set;
	string s;
	string str;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		for (int j = i; j < s.length(); j++) {
			str += s[j];
			set.insert(str);
		}
		str.clear();
	}
	cout << set.size() << endl;
	
}
