//#include <bits/stdc++.h>    // C++ 헤더 파일 모두 포함

#define endl '\n'    // endl 대신 '\n'을 사용

using namespace std;


int main(void) {

	ios::sync_with_stdio(false);    // cin과 cout을 동기화하지 않음
	cin.tie(NULL);    // cin과 cout의 묶음을 해제

	int n, m, input, cnt = 0;    // n: dq의 크기, m: 수행해야 하는 연산의 개수, input: 명령에 필요한 숫자, cnt: 회전 수
	deque<int> dq;    // int형 덱을 선언

	cin >> n >> m;

	//dq를 n만큼 입력받기
	for (int i = 0; i < n; i++) { dq.push_back(i + 1); }    // 덱에 1부터 n까지의 정수 push_back

	int pos = 0;    // 찾는 숫자의 인덱스 값

	for (int i = 0; i < m; i++) {
		cin >> input;
		pos = 0;
		// 입력받은 K의 위치값 찾기
		for (int j = 0; j < dq.size(); j++) {
			if (dq[j] == input)
			{
				pos = j;
				break;
			}
		}
		if (dq.front()==input) {
			dq.pop_front();
			continue;
		}
		// [2] 왼쪽으로 이동 2,3,4,k.1
		if (pos < (dq.size() / 2)) {    // 만약 찾는 숫자의 인덱스 값이 덱의 절반보다 크면
			
			while (1) {
				if (dq.front() == input) {    // 맨 앞의 값이 찾는 숫자와 같으면
					dq.pop_front();    // 맨 앞의 값을 pop
					break;
				}
				dq.push_back(dq.front());    // 맨 앞의 값을 맨 뒤로 보냄
				dq.pop_front();    // 맨 앞의 값을 pop
				cnt++;    // 회전 수 증가
			}
		}

		// [3] 오른으로 이동  k,1,2,4,k-1
		else {    // 만약 찾는 숫자의 인덱스 값이 덱의 절반 이하이면
			while (1) {
				if (dq.back() == input) {    // 맨 뒤의 값이 찾는 숫자와 같으면
					dq.pop_front();    // 맨 앞의 값을 pop
					break;
				}

				dq.push_front(dq.back());    // 맨 뒤의 값을 맨 앞으로 보냄
				dq.pop_back();    // 맨 뒤의 값을 pop
				cnt++;    // 회전 수 증가
			}
		}

	}

	cout << cnt << endl;

	return 0;
}
