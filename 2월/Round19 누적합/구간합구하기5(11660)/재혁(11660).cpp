#include<iostream>

#define endl '\n'
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    long M;
    cin >> N >> M;

    int** arr = new int* [N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[N];
        int tmp = 0;
        for (int k = 0; k < N; k++) {
            int input; cin >> input;
            tmp += input;
            arr[i][k] = tmp;
        }
    }

    for (long i = 0; i < M; i++) {
        int x1, x2, y1, y2;
        cin >> y1 >> x1 >> y2 >> x2;

        int sum = 0;
        for (int y = y1 - 1; y < y2; y++) {
            if (x1 > 1)
                sum += arr[y][x2 - 1] - arr[y][x1 - 2];
            else
                sum += arr[y][x2 - 1];
        }
        cout << sum << endl;
    }

    return 0;
}