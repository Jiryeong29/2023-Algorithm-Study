#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n); // n개의 pair를 저장할 vector 선언

    // n개의 pair 입력받아 vector에 저장
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v[i] = make_pair(x, y);
    }

    // 모든 pair에 대해 rank 계산하여 출력
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = 0; j < n; j++) {
            // i번째 pair보다 x, y 좌표가 둘 다 큰 경우 rank 증가
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                cnt++;
            }
        }
        cout << cnt << " "; // i번째 pair의 rank 출력
    }

    return 0;
}
