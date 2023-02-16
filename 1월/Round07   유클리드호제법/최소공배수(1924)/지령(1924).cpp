//최소공배수_1924

#include<iostream>
#define endl '\n'
using namespace std;

int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else
		return GCD(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t, a, b;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << (a*b)/GCD(a, b)<<endl;	
	}
	return 0;
}