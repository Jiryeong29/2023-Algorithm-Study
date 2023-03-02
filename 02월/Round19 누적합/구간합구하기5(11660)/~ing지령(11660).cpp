// 문제 잘못 이해해서 다시 풀어야함

#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'
int main(void) {

	ios::sync_with_stdio(0); cin.tie(0);
	int n, m;
	int x1, x2, y1, y2;

	cin >> n >> m;

	vector<vector<int>>  A(n+1, vector<int>(n+1));
	vector<int> P(n * n+1);


	P[0] = 0;
	for (int i = 1; i < n+1; i++)
	{
		for (int j = 1; j < n+1; j++) {
			cin >> A[i][j];
			P[(i - 1) * n + j] = P[((i - 1) * n + j) - 1] + A[i][j];
		}
	}



	/*for (int i = 1; i <= n * n; i++) {
		cout << "P[" << i << "] : " << P[i]<<endl;

	}*/
	for (int i = 0; i < m; ++i)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 == 1 && y1 == 1) {
			cout << P[((x2 - 1) * n + y2)] << endl;
		}
		else if (x1 == x2 && y1 == y2) {

			cout << P[((x2 - 1) * n + y2)] - P[((x1 - 1) * n + y1)-1] << endl;
		}
		else
		{
			cout << P[((x2 - 1) * n + y2) ] - P[((x1 - 1) * n + y1) ] << endl;
		}

	}
	return 0;

}
