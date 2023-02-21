d#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long start = 0, end = 1000000000, mid, result = 0;

    while (start <= end) {
        mid = (start + end) / 2;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] > mid) {
                sum += v[i] - mid;
            }
        }

        if (sum >= m) {
            if (result < mid) {
                result = mid;
            }
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << result << endl;

    return 0;
}
