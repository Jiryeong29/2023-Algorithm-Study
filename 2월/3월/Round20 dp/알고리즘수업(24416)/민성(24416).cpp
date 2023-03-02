#include <iostream>
using namespace std;

int P[41] = { 0 };
int N, cnt1 = 0, cnt2 = 0;

int fib(int n) {
    if (n == 1 || n == 2) {
        cnt1++;
        return 1;
    }
    else 
    {return (fib(n - 1) + fib(n - 2));}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    fib(N);

    P[1] = P[2] = 1;
    for (int i = 3; i <= N; i++) {
        P[i] = P[i - 1] + P[i - 2];
        cnt2++;
    }

    cout << cnt1 << " " << cnt2;

    return 0;
}