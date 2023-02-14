#include <iostream>
#include <deque>

using namespace std;

int num[50];
int N, M, fre, idx = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	deque<int> q;
	deque<int>::iterator iter = q.begin();

	cin >> N >> M;
	for (int i = 0; i < N; i++) { q.push_back(i + 1); } //순서대로 deque에 넣기

	for (int i = 0; i < M; i++) {cin >> num[i];} //찾을 수 배열에 넣기
	
	for (int i = 0; i < M; i++) { //찾을때까지 반복
		int f(q.size() / 2);
		idx = 0;

		for (iter = q.begin(); iter != q.end(); ++iter) {
			if (num[i] == *iter) break;
			idx++;
		}

		if (num[i] == q.front()) { //맨앞에 있으면 스킵
			q.pop_front();
			continue;
		}

		if (idx <= f) {
			while (q.front() != num[i]) { //왼쪽
				q.push_back(q.front());
				q.pop_front();
				fre++;
			}q.pop_front();
		}

		else {
			while (q.front() != num[i]) { //오른쪽
				q.push_front(q.back());
				q.pop_back();
				fre++;
			}q.pop_front();
		}
	}

	cout << fre;

	return 0;
}
	