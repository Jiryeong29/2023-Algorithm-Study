#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
    set<string> s;
    string str;
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        for (int j = 1; j < len - i + 1; j++)
            s.insert(str.substr(i, j));
    }
    cout << s.size();
}