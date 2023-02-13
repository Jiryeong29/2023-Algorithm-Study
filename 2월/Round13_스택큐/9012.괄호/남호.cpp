#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
using namespace std;



int main() {
    
    int n;
    string str;
    char c;
    cin >> n;
    bool check = false;
    map<char, int> map;

    for (int i = 0; i < n; i++) {
        cin >> str;
        check = false;
        for (int j = 0; j < str.length(); j++) {
            c = str[j];
            map[c]++;
            if (map['('] < map[')']) {
                cout << "NO" << '\n'; 
                check = true;
                break;
            }
        }
        if (check) {
            map.clear();
            continue;
        }
        if (map['('] == map[')']) {
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
        map.clear();
    }
   
}


//stack
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
using namespace std;

bool Check(string str) {
    int len = (int)str.length(); //문자열 길이
    stack<char> st;              //char 타입을 받는 stack 선언

    for (int i = 0; i < len; i++) { //문자열 길이만큼 반복문
        char c = str[i];        //문자 하나씩 받음

        if (c == '(') {
            st.push(str[i]);    //여는 괄호면 push
        }
        else {
            if (!st.empty()) {    //닫는 괄호면 stack 이 비어있는지 확인후
                st.pop();       //스택이 비어있지 않으면 pop
            }
            else {
                return false;   //비어있으면 false.
            }
        }
    }

    return st.empty();          //반복문이 끝나고 스택에 괄호가 남아있으면 false
}

int main(void) {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (Check(str)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
