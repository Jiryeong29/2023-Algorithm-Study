#include<iostream>
#include<vector>
#define endl '\n'
using namespace std;
typedef long long ll;
vector<long long> arr;

int main()
{
    int n, m;
    cin >> n >> m;

    ll bottom = 0, top = 0;
    for (int i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        arr.push_back(tmp);
        top = max(top, tmp);
    }


    ll result = 0;
    while (bottom <= top) {
        ll mid = (bottom + top) / 2;
        ll num = 0;
        for (ll x : arr) {
            if ((x - mid) < 0)continue;
            num += (x - mid);
        }

        if (num < m) {
            top = mid - 1;
        }
        else {
            bottom = mid + 1;
            result = max(result, mid);
        }
    }
    cout << result;


    return 0;
}