#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;


int ary[1024][1024];
int Sary[1024][1024];

void PrefixSum(int N, int M) {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> ary[i][j];
			Sary[i + 1][j + 1] = Sary[i][j + 1] + Sary[i + 1][j] - Sary[i][j] + ary[i][j];
		}
	}

	for (int i = 0; i < M; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << (Sary[x2][y2] - Sary[x2][y1 - 1] - Sary[x1 - 1][y2] + Sary[x1 - 1][y1 - 1]) << '\n';
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;

	cin >> N >> M;

	PrefixSum(N, M);

	return 0;
}