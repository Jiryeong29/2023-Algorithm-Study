#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false); // 이거 없으니까 시간초과
	cin.tie(0);
	map<int, int>map;
	int n;
	int n2;
	int m;
	int m2;
	
	//int* arr = new int[m];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n2;
		map[n2]++;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> m2;
		cout << map[m2] << " ";
	}

}
