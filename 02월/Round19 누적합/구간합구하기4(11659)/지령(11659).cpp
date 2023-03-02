#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'
int main(void) {

	ios::sync_with_stdio(0); cin.tie(0);
	int n, m;
	int x, y;

	cin >> n >> m;

	vector<int> A(n);
	vector<int> P(n);


	for (int i = 0; i < n; i++) 
	{
		cin >> A[i];
	}

	P[0] = A[0];
	for (int i = 1; i < n; i++) 
	{
		P[i] = P[i - 1] + A[i];
	}

	

	for (int i = 0; i < m; ++i) {
		cin >> x >> y;
		if (x == 1) 
		{
			cout << P[y-1] << endl;
			
		}
		else
		{
			cout << P[y - 1] - P[x - 2] << endl;
		}

	}
	return 0;

}