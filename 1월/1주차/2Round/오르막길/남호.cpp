#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
    int n;
    int m;
    int sum = 0;

    int a;
    int b = 0;
    cin >> n;
    //int* arr;
    //arr = new int[n];
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }
    for (int i = 1; i < n; i++) {
        //if (v[i] < v[i + 1]) 

        if (v[i - 1] < v[i]) {
            a = v[i] - v[i - 1];
            b += a;
            sum = max(b, sum);
        }
        else {
            a = 0;
            b = 0;      
        }
        
    }
    cout << sum << endl;
}
