#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool Check(string str) {
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];

        if (c == '(') {
            st.push(str[i]);
        }
        else {
            if (!st.empty()) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return st.empty();
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (Check(str)) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}