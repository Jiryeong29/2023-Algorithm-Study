#include <iostream>
#include <cmath>
#include <set>
#define MAX 10000
using namespace std;

bool primeBool[MAX + 1] = { false, };
set <int> prime;

int main() {
    int M, N, min;
    int sum = 0;
    cin >> M >> N;

    for (int i = 2; i < N + 1; i++) { primeBool[i] = true; }

    int len = sqrt(N);                          //반복문의 실행범위를 위해 n의 제곱근인 leng생성

    for (int i = 2; i < len + 1; i++) {         //2부터 n까지의 소수를 판별 후
        if (primeBool[i] == false) { continue; }
        for (int j = i * i; j < N + 1; j += i) { primeBool[j] = false; }
    }

    for (int i = M; i < N + 1; i++) {
        if (primeBool[i] == true) { 
            prime.insert(i);
            sum = sum + i;
        }
    }

    if (prime.empty()) { cout << -1 << '\n'; }
    else { 
        min = *prime.begin();
        cout << sum << '\n'; 
        cout << min << '\n';
    }

    return 0;
}