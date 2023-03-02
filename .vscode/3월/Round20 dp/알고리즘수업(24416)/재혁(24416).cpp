#include<iostream>
using namespace std;

int fib(int n, int& count) {
    if (n == 1 or n == 2) {
        count++;
        return 1; // 코드1
    }
    else {
        return fib(n - 1, count) + fib(n - 2, count);
    }
}

    
int fibonacci(int n,int& count) {
    int* f = new int[n];
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i < n+1; i++) {
        f[i] = f[i - 1] + f[i - 2];  // 코드2
        count++;
    }
    return f[n];
}



int main()
{
    int n, cnt = 0;
    cin >> n;
    fib(n, cnt);
    cout << cnt << " ";
    cnt = 0;
    fibonacci(n, cnt);
    cout << cnt;

    return 0;
}