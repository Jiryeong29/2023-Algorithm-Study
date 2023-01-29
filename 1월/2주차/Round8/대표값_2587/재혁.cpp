#include<iostream>
#include<set>
using namespace std;


int main()
{
	set<int> arr;
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.insert(tmp);
	}
	for (auto iter = arr.begin(); iter != arr.end(); iter++) {
		cout << *iter << '\n';
	}
	return 0;
}
