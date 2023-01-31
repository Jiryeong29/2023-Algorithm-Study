#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ysorting(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second == p2.second) { return p1.first < p2.first;}
    else {return p1.second < p2.second;}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <pair<int, int>> V;
    int N, x, y;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;

        V.push_back({ x,y });
    }
    sort(V.begin(), V.end(), ysorting);

    for (int i = 0; i < V.size(); i++) {
        cout << V[i].first << ' ' << V[i].second << '\n';
    }

    return 0;
}