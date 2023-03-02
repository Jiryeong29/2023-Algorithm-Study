#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int f[40] = { 0, };
int cnt = 0;

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

void fibonacci(int n)
{
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        cnt++;
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);

    cout << fib(n) << " " << cnt;
    return 0;
}
