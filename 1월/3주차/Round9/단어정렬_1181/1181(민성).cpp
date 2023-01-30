#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWith(string a, string b) {
    if (a.length() == b.length()) { return a < b; }
    return a.length() < b.length();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    vector<string> V;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        if (find(V.begin(), V.end(), str) == V.end()) { V.push_back(str); }
    }
    sort(V.begin(), V.end(), compareWith);

    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << '\n';
    }

    return 0;
}