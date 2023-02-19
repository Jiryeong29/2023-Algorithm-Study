#include<iostream>
#include<string>
#define endl '\n'
using namespace std;


int main()
{
	int N; cin >> N;
	int num = 666;
	int cnt = 1;
	while (cnt != N) {
		num++;
		string check = to_string(num);
		if (check.find("666") != string::npos) {
			cnt++;
		}
	}
	cout << num;
	return 0;
}