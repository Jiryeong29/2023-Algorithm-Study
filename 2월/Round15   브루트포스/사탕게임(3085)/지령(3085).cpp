#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

vector<vector<char>> v;

// 인접한 같은 색 사탕 개수 중 최대값을 구하는 함수
int countMaxCandy() {
    int maxCandy = 1;

    // 행 기준으로 가장 많은 사탕 개수 찾기
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = 1; j < n; j++) {
            if (v[i][j] == v[i][j - 1]) cnt++;
            else {
                maxCandy = max(maxCandy, cnt); // 이전까지의 최대값과 비교하여 업데이트
                cnt = 1; // 새로운 색상으로 시작
            }
        }
        maxCandy = max(maxCandy, cnt);
    }

    // 열 기준으로 가장 많은 사탕 개수 찾기
    for (int j = 0; j < n; j++) {
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (v[i][j] == v[i - 1][j]) cnt++;
            else {
                maxCandy = max(maxCandy, cnt);
                cnt = 1;
            }
        }
        maxCandy = max(maxCandy, cnt);
    }

    return maxCandy;
}

int main() {
    cin >> n;
    v.resize(n, vector<char>(n));

    // 색상 입력 받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    int ans = 0;

    // 모든 인접한 두 칸을 교환하여 사탕 개수 구하기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j + 1 < n) { // 우측 칸과 교환
                swap(v[i][j], v[i][j + 1]);
                ans = max(ans, countMaxCandy()); // 이전까지의 최대값과 비교하여 업데이트
                swap(v[i][j], v[i][j + 1]); // 다시 원래대로 돌리기
            }
            if (i + 1 < n) { // 하단 칸과 교환
                swap(v[i][j], v[i + 1][j]);
                ans = max(ans, countMaxCandy());
                swap(v[i][j], v[i + 1][j]);
            }
        }
    }

    cout << ans << endl; // 최대값 출력
    return 0;
}
