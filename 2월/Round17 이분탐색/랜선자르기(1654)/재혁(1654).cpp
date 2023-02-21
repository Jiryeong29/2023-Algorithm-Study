#include<iostream>
#include<vector>
#define endl '\n'
using namespace std;
typedef long long ll;
vector<long> arr;





int main()
{
    int n, m;
    cin >> n >> m;

    ll left = 1, right = 0;
    for (int i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        arr.push_back(tmp);
        right = max(right, tmp);
    }


    ll result = 0;
    while (left <= right) {
        ll mid = (left + right) / 2;
        int num = 0;
        for (ll x : arr) {
            num += (x / mid);
        }

        if (num < m) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
            result = max(result, mid);
        }
    }
    cout << result;


    return 0;
}