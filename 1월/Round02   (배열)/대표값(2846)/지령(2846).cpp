#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int iCount = 0, value,iMax=0, iTemp=0, sum=0;
    
    //입력
    vector<int> v;
    v.assign(10, 0);

    for (int i = 0; i < 10; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < 10; ++i) {
        iCount = 0;
        for (int j = 0; j < 10; ++j) {
            if (v[i] == v[i]) {
                iCount++;
                iMax = max(iCount, iMax);
                if (iCount == iMax) {
                    iTemp = v[i];
                }
            }
        }
        sum+=v[i]
    }
    cout << sum / 10 << endl;
    cout << value;
    // 최빈값

}