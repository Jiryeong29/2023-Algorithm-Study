#include <iostream>
#include <cmath>
#define MAX 1000
using namespace std;

bool primeBool[MAX + 1];

int main() {
    int N, K;
    int count = 0;
    cin >> N >> K;

    for (int i = 2; i < N + 1; i++) { primeBool[i] = true; }

    for (int i = 2; i < N + 1; i++) {         //2부터 n까지의 소수를 판별 후
        if (primeBool[i] == true) {
            for (int j = i; j < N + 1; j += i) { 
                if (primeBool[j] == true) { 
                    primeBool[j] = false; 
                    count++;
                    //cout << "count : " << count;
                    //cout << " prime : " << j << '\n';
                    if (count == K) { cout << j; return 0;}
                }
                
                
                
            }
        }
    }

    return 0;
}