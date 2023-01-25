#include <iostream>
#include <cmath>
#include <set>
#define MAX 10000
using namespace std;

bool primeBool[MAX + 1] = { false, };
set <int> prime;

void Eratos(int N) {
    int out;

    for (int i = 2; i < N + 1; i++) { primeBool[i] = true; }

    int len = sqrt(N);                          //�ݺ����� ��������� ���� n�� �������� leng����

    for (int i = 2; i < len + 1; i++) {         //2���� n������ �Ҽ��� �Ǻ� ��
        if (primeBool[i] == false) { continue; }
        for (int j = i * i; j < N + 1; j += i) { primeBool[j] = false; }
    }

    for (int i = 2; i < N + 1; i++) {
        if (primeBool[i] == true) {
            prime.insert(i);
        }
    }

    int half = N / 2;
    int left = N - half;
    while (true) {
        if (prime.find(half) == prime.end() || prime.find(N - half) == prime.end()) {
            half--;
            left = N - half; 
        }
        else { break; }
    }
    cout << half << " " << left << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, count = 0;
    cin >> n;
    while (count < n) {
        int N;
        cin >> N;
        Eratos(N);
        count++;
    }

    return 0;
}
