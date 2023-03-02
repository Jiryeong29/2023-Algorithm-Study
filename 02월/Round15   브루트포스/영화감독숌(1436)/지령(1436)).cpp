#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;

    int num = 665; // 666부터 시작하므로 665로 초기화
    int cnt = 0; // '666'이 포함된 숫자의 개수

    while (cnt < n) { // n번째 '666'을 찾을 때까지 반복
        num++; // 다음 수로 이동
        int temp = num; // temp에 현재 숫자 저장
        while (temp >= 666) { // 666 이상의 수에 대해 검사
            if (temp % 1000 == 666) { // 뒤 3자리가 666인 경우
                cnt++; // '666'이 포함된 숫자 개수 증가
                break; // 반복 종료
            }
            temp /= 10; // temp에서 맨 뒷자리를 제거하고 다시 검사
        }
    }

    cout << num << '\n'; // n번째 '666'이 포함된 숫자 출력

    return 0;
}