#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>

#define INF 1000000001
using namespace std;

long long N, M;
vector<int> wood;

void input() {
    cin >> N >> M;
    wood.assign(N, 0);

    for (int i = 0; i < N; ++i) {
        cin >> wood[i];
    }
}


bool isPossible(long long len) {

    long long sum = 0;

    for (int i = 0; i < N; ++i) {
        if (wood[i] > len) { sum += wood[i] - len; }
    }

    if (sum >= M)    return true;
    else    return false;
}

void solve() {
    sort(wood.begin(), wood.end());

    long long left = 1, right = wood[wood.size() - 1];
    long long result = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;

        if (isPossible(mid)) {
            result = max(result, mid);
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }
    cout << result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    input();
    solve();

    return 0;
}
