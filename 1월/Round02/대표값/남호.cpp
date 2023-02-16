#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int ava = 0;
    int ma = 0;
    map<int, int> m;
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> n;
        arr[i] = n;
        sum += n;
        if (m.count(arr[i]) == 1) {
            m[arr[i]] += 1;
        }
        else m[arr[i]] = 1;
    }
  
    n = 0;
    for (auto iter = m.begin(); iter != m.end(); iter++) {
        if (iter->second > n) {
            n = iter->second;
            ma = iter->first;
        }
    }
    ava = sum / 10;
    cout << ava << endl;
    cout << ma << endl;
}
