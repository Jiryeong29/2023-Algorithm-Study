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

    int len = sqrt(N);                          //�ݺ����� ��������� ���� n�� �������� leng����

    for (int i = 2; i < len + 1; i++) {         //2���� n������ �Ҽ��� �Ǻ� ��
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