#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, num, cnt = 1;
    cin >> n;

    stack<int> st;
    string s = "";

    // n번 반복하면서 수열을 만들 수 있는지 확인
    for (int i = 0; i < n; i++) {
        cin >> num;

        // 현재 스택의 top이 num과 같아질 때까지 push
        while (cnt <= num) {
            st.push(cnt);
            s += "+\n";
            cnt++;
        }

        // top이 num이 되도록 pop
        if (st.top() == num) {
            st.pop();
            s += "-\n";
        }

        // 만들 수 없는 경우 NO 출력 후 종료
        else {
            cout << "NO\n";
            return 0;
        }
    }

    // 수열을 만들 수 있는 경우 정답 출력
    cout << s;

    return 0;
}
