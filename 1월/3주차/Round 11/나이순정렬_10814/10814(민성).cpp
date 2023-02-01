#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

bool sorting(tuple<int, string, int> t1, tuple<int, string, int>  t2) {
    if (get<0>(t1) == get<0>(t2)) { return get<2>(t1) < get<2>(t2); }
    else {return get<0>(t1) < get<0>(t2);}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <tuple<int, string, int>> V;
    int N, age;
    string name;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> age >> name;

        V.push_back(make_tuple(age, name, i));
    }
    sort(V.begin(), V.end(), sorting);

    for (int i = 0; i < V.size(); i++) {
        cout << get<0>(V[i]) << ' ' << get<1>(V[i]) << '\n';
    }

    return 0;
}