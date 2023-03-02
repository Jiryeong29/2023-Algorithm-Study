#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    int x, y;
    cin >> n;

    vector<pair<int, int>> v(n);  // pair로 시작 시간과 끝 시간 저장

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v[i] = make_pair(y, x);  // 끝 시간을 x에 저장, 시작 시간을 y에 저장
    }

    sort(v.begin(), v.end());  // 끝 시간이 빠른 회의부터 정렬

    int cnt = 1;  // 첫 번째 회의는 무조건 선택
    int time = v[0].first;  // 첫 번째 회의가 끝나는 시간

    for (int i = 1; i < n; i++) {
        if (v[i].second >= time) {  // 이전 회의가 끝난 시간 이후에 시작하는 회의를 찾음
            cnt++;
            time = v[i].first;
        }
    }

    cout << cnt << endl;

    return 0;
}
