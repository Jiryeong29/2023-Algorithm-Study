#include<iostream>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long N, K;
    cin >> N >> K;
    int* arr = new int[N];

    int input, tmp = 0;
    for (long i = 0; i < N; i++) {
        cin >> input;
        tmp += input;
        arr[i] = tmp;
    }

    tmp = arr[K - 1];
    for (long i = 0; i < N - K; i++) {
        tmp = max(tmp, arr[K+i] - arr[i]);
    }

    cout << tmp;

    return 0;
}