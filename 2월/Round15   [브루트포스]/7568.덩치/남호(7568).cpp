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
    int m, s;
    int cnt;
    vector<pair<int, int> > v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m >> s;
        v.push_back(pair<int, int>(m, s));
    }
    for (int j = 0; j < n; j++) {
        cnt = 1;
        for (int k = 0; k < n; k++) {
            if (v[j].first < v[k].first && v[j].second < v[k].second) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
