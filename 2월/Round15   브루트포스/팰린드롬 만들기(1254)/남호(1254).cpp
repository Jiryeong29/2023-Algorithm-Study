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
#include<queue>
#include<deque>
using namespace std;


string s;
int answer = 0;

bool isPalindrom(string str)
{
    int cnt = str.size() / 2;
    for (int i = 0; i < cnt; i++) {
        if (str[i] != str[str.size() - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main()
{
    cin >> s;

    answer = s.size() * 2 - 1;
    for (int i = 0; i < s.size(); i++) {
        string temp = s.substr(i, s.size() - i);
        if (isPalindrom(temp)) {
            answer = s.size() + i;
            break;
        }
    }

    cout << answer << "\n";
    return 0;
}
