#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i]; // 각 사람의 인출 시간 입력받기
    }

    sort(v.begin(), v.end()); // 인출 시간을 오름차순으로 정렬

    int sum = 0, time = 0;

    for (int i = 0; i < n; i++) {
        time += v[i]; // 대기 시간 누적하기
        sum += time; // 대기 시간의 합 누적하기
    }

    cout << sum << endl; // 결과 출력

    return 0;
}
