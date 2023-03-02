#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;

    // n개의 동전 가치를 입력받아 벡터에 저장
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int cnt = 0;


    for (int i = n - 1; i >= 0; i--) {  // 가장 큰 동전부터 사용하기 위해 뒤에서부터 탐색
        cnt += k / v[i];  // 현재 동전으로 만들 수 있는 개수를 더함
        k %= v[i];  // 남은 금액을 계산 (k에서 현재 동전으로 만든 금액을 빼고 나머지 금액을 구함)
    }

    cout << cnt << endl;  // 동전의 최소 개수 출력
    return 0;
}
