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
using namespace std;


    


int main() {
   
    vector<int> v;
    queue<int> q;
    int n;
    int m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        q.push(i);     
    }

    cout << '<';

    while (!q.empty()) {
        for (int i = 0; i < m - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) {
            cout << v[i] << ">";
            break;
        }
        cout << v[i] << ',' << " ";
    }
   
   
}
