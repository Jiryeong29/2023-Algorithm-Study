#include<iostream>

#define endl '\n'
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long N, M;
    cin >> N >> M;
    int* arr = new int[N];

    int input = 0, tmp = 0;
    for (long i = 0; i < N; i++) {
        cin >> input;
        tmp += input;// = arr[i];
        arr[i] = tmp;
    }

    for (long i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        if (start < 2)cout << arr[end - 1] << endl;
        else cout << arr[end - 1] - arr[start - 2] << endl;
    }

    return 0;
}