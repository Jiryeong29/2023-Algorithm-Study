#include <iostream>
#include <cmath>
#define MAX 1000000
using namespace std;

bool primeBool[MAX + 1];

int main() {
    int M, N;
    cin >> M >> N;

    for (int i = 2; i < N + 1; i++) { primeBool[i] = true; }

    int len = sqrt(N);                          //�ݺ����� ��������� ���� n�� �������� leng����

    for (int i = 2; i < len + 1; i++) {         //2���� n������ �Ҽ��� �Ǻ� ��
        if (primeBool[i] == true) { 
            for (int j = i * i; j < N + 1; j += i) { primeBool[j] = false; } 
        }
    }

    for (int i = M; i < N + 1; i++) {
        if (primeBool[i] == true) {cout << i << '\n'; }     //endl�� �����ߴٰ� �ð��ʰ� ��Ӷ��� ����ã�´ٰ� 30�аɸ�
    }

    return 0;
}

//int arr[MAX + 1]{ 0, };
//
//int main()
//{
//    int M, N;
//    cin >> M >> N;
//
//    for (int i = 2; i <= N; i++) {
//        arr[i] = i;
//    }
//
//    for (int i = 2; i * i <= N; i++) {
//        if (arr[i] == 0){continue;}
//        for (int j = i * i; j <= N; j += i) {arr[j] = 0;}
//    }
//
//    for (int i = M; i <= N; i++) {
//        if (arr[i] != 0){cout << arr[i] << '\n'; }
//    }
//    return 0;
//}