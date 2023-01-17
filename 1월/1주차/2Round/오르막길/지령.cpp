// 오르막길 2846
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N, j, temp = 0,iMax=0;
    cin >> N;
    //입력
    vector<int> v;
    v.assign(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    for (j = 1; j < N; ++j)
    {
        if (v[j - 1] < v[j]) {
            temp += (v[j] - v[j - 1]);
            iMax = max(iMax, temp);
        }
        else
            temp = 0;
    }

    cout << iMax;
  

}