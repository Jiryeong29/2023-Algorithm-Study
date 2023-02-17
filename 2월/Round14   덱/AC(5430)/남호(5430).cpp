//런타임 에러
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

int main() {
    int n;
    string s;
    int m;
    cin >> n;
    while (n--) {
        s = "";
        deque <int> d;
        int reverse = 0;
        cin >> s;
        cin >> m;
        string s2;
        cin >> s2;
        string tmp = "";
        string s3= "";
        if (m == 0) {
            cout << "error" << '\n';
            continue;
        }
        if (m <= s.length()) {
            cout << "error" << '\n';
            continue;
        }
        for (int i = 0; i < s2.length(); i++) {
           
            if (i % 2 == 1) {
                tmp = s2[i];
                d.push_back(stoi(tmp));
                tmp = "";            
            }
        }
        for (auto a : s) {
            if (a == 'R') {
                reverse++;
            }
            else {
                if (reverse % 2 == 0) {
                    d.pop_front();
                }
                else {
                    d.pop_back();
                }

            }
        }
        
        cout << '[';
        if (reverse % 2 == 0) {
            for (int i = 0; i < d.size(); i++) {
                if (i == d.size() - 1) {
                    cout << d[i];
                    break;
                }
                cout << d[i] << ',';

            }
        }
        else {
            for (int i = d.size() - 1; i >= 0; i--) {
                if (i == 0) {
                    cout << d[i];
                    break;
                }
                cout << d[i] << ',';
            }
        }
        cout << ']' << '\n';
    }

}
