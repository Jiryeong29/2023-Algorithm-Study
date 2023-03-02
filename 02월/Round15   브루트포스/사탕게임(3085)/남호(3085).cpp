#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#define MAX 51
using namespace std;
int N, maxCandy = 0;
char candy[MAX][MAX];
void check() {
    for (int i = 0; i < N; i++) {
        int count = 1;
        for (int j = 0; j < N; j++) {
            if (candy[i][j] == candy[i][j + 1]) {
                count++;
            }
            else {
                if (maxCandy < count) maxCandy = count;
                count = 1;
            }
        }
    }

    for (int j = 0; j < N; j++) {
        int count = 1;
        for (int i = 0; i < N; i++) {
            if (candy[i][j] == candy[i + 1][j]) {
                count++;
            }
            else {
                if (maxCandy < count) maxCandy = count;
                count = 1;
            }
        }
    }
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> candy[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            swap(candy[i][j], candy[i][j + 1]);
            check();
            swap(candy[i][j], candy[i][j + 1]);
        }
    }

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N - 1; i++) {
            swap(candy[i][j], candy[i + 1][j]);
            check();
            swap(candy[i][j], candy[i + 1][j]);
        }
    }

    cout << maxCandy << '\n';

    return 0;
}
