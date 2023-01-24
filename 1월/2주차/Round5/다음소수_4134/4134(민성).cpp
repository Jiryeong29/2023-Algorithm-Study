#include <iostream>
#include <cmath>
#define MAX 4000000000
using namespace std;

bool Prime(unsigned int input) {
	for (unsigned int i = 2; i * i < input + 1; i++) {
		if (input % i == 0) {return false;}
	}
	return true;
}

int main() {
    int N, count = 0;;
    unsigned int input;
    cin >> N;

    while (count != N) {
        cin >> input;
        while (true) {
            if (input == 0 || input == 1) { cout << 2 << '\n'; break; }
            else if (Prime(input)) {
                cout << input << '\n';
                break;
            }
            input++;
        }
        count++;
    }
    return 0;
}

//bool primeBool[MAX + 1] = { false, };
//
//void Prime(unsigned int N) {
//    for (int i = 2; i < MAX + 1; i++) { primeBool[i] = true; }
//
//    int len = sqrt(MAX);                          //반복문의 실행범위를 위해 n의 제곱근인 leng생성
//
//    for (int i = 2; i < len + 1; i++) {         //2부터 n까지의 소수를 판별 후
//        if (primeBool[i] == false) { continue; }
//        for (int j = i * i; j < MAX + 1; j += i) { primeBool[j] = false; }
//    }
//
//    for (unsigned int i = N; i < MAX + 1; i++) {
//        if (primeBool[i] == true) {
//            cout << i << '\n';
//            break;
//        }
//    }
//
//}
//
//int main() {
//    int N, count = 0;;
//    unsigned int input;
//    cin >> N;
//
//    while (count != N) {
//        cin >> input;
//        Prime(input);
//        count++;
//    }
//
//    return 0;
//}