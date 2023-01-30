#include<iostream>
#include<algorithm>
#include<cstring>
#define endl '\n'
using namespace std;

bool scomp(const string &a,const string &b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main()
{
	int N;
	cin >> N;
	string* arr = new string[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N, scomp);
	cout << arr[0] << endl;
	for (int i = 1; i < N; i++) {
		if(arr[i-1] != arr[i])
			cout << arr[i] << endl;
	}


	return 0;
}