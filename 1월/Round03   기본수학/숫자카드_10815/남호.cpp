#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
	map<int, int>map;
	int n;
	int n2;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n2;
		map[n2] = 0;
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n2;
		if (map.count(n2) == 1) {
			v.push_back(1);
		}
		else v.push_back(0);
	}
	for (auto a : v) cout << a << " ";

}
