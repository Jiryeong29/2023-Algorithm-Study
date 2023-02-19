#include<iostream>
#include<algorithm>
#define endl '\n'
using namespace std;

struct matrix {
	char arr[51][51];
	int Max = 0;
}m;


void check(const int N);


int main()
{
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int K = 0; K < N; K++) {
			cin >> m.arr[i][K];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N - 1; k++) {
			swap(m.arr[i][k], m.arr[i][k + 1]);
			check(N);
			swap(m.arr[i][k], m.arr[i][k + 1]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N - 1; k++) {
			swap(m.arr[k][i], m.arr[k + 1][i]);
			check(N);
			swap(m.arr[k][i], m.arr[k + 1][i]);
		}
	}

	cout << m.Max;

	return 0;
}

void check(const int N) {
	int result = 0;
	for (int i = 0; i < N; i++) {
		int cnt = 1;
		int tmp = m.arr[i][0];
		for (int k = 1; k < N; k++) {
			if (m.arr[i][k] == tmp)cnt++;
			else {
				result = max(cnt, result);
				cnt = 1;
				tmp = m.arr[i][k];
			}
		}
		result = max(cnt, result);
	}

	for (int i = 0; i < N; i++) {
		int cnt = 1;
		int tmp = m.arr[0][i];
		for (int k = 1; k < N; k++) {
			if (m.arr[k][i] == tmp)cnt++;
			else {
				result = max(cnt, result);
				cnt = 1;
				tmp = m.arr[k][i];
			}
		}
		result = max(cnt, result);
	}
	m.Max = max(result, m.Max);
}
