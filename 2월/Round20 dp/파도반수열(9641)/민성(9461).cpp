#include <iostream>
using namespace std;

long long P[102] = { 0 };
int T, N;

void wave(int N) {
    P[1] = P[2] = P[3] = 1;
    P[4] = P[5] = 2;
    for (int i = 6; i <= N; i++) {
        P[i] = P[i - 1] + P[i - 5];
    }

    cout << P[N] << '\n';
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        wave(N);
    }

    return 0;
}