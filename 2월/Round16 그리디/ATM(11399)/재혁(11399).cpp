#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
using namespace std;

vector<int> ATM;

int main()
{
	int N, tmp;
	int result = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		ATM.push_back(tmp);
	}
	sort(ATM.begin(), ATM.end());
	tmp = 0;
	for (int x : ATM) {
		tmp += x;
		result += tmp;
	}
	cout << result;



	return 0;
}