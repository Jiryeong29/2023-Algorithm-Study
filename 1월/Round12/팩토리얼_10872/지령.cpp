#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int factorial(int n) {
    if (n > 1) return n * factorial(n - 1);
    else return 1;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}