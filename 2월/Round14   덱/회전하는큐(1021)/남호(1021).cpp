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
    deque<int> q;
    int n, m;
    int s;
    int cnt = 0;
    int index;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        q.push_back(i);
   }
    while (m--) {
        cin >> s;
        for (int i = 0; i < q.size(); i++) {
            if (q[i] == s) {
                index = i;
            }
        }
        if (index > q.size() - index) {
            while (1) {
                if (s == q.front()) {
                    q.pop_front();
                    break;
                }
                q.push_front(q.back());
                q.pop_back();
                cnt++;
            }
        }
        else {
            while (1) {
                if (s == q.front()) {
                    q.pop_front();
                    break;
                }
                
                q.push_back(q.front());
                q.pop_front();
                cnt++;
            }
        }
    }
    cout << cnt << endl;

}
