#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <int> V;
    set <int> S;
    int N, input;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> input;
        V.push_back(input);
        S.insert(input);
    }

    for (int i = 0; i < N; i++) {
        auto it = S.find(V[i]);
        cout << it - S.begin() << ' '; //여기 수정중
    }

    return 0;
}