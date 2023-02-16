#include <iostream>
#include <cmath>
#include <set>
#define MAX 300000
using namespace std;

bool primeBool[MAX + 1] = { false, };
set <int> prime;

void Eratos(int N) {
    int out;

    for (int i = 2; i < 2 * N + 1; i++) { primeBool[i] = true; }

    int len = sqrt(2*N);                          //�ݺ����� ��������� ���� n�� �������� leng����

    for (int i = 2; i < len + 1; i++) {         //2���� n������ �Ҽ��� �Ǻ� ��
        if (primeBool[i] == false) { continue; }
        for (int j = i * i; j < 2 * N + 1; j += i) { primeBool[j] = false; }
    }

    for (int i = N + 1; i < 2 * N + 1; i++) {
        if (primeBool[i] == true) {
            prime.insert(i);
        }
    }
    out = prime.size();
    cout << out << '\n';
    prime.clear();
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) { break; }
        else { Eratos(n); }
    }
}