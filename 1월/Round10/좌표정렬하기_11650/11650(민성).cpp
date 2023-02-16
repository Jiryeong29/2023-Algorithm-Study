#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <pair<int, int>> V;
    int N, x, y;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;

        V.push_back({x,y});
    }
    sort(V.begin(), V.end());

    for (int i = 0; i < V.size(); i++) {
        cout << V[i].first << ' ' << V[i].second << '\n';
    }

    return 0;
}