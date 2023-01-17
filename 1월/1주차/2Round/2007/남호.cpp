#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
    int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int x, y;
    int sum = 0;
    cin >> x >> y;
    for (int i = 0; i < x; i++) {
        sum += arr[i];
        if (i == (x-1)) {
            sum -= arr[i] - y;
        }
    }
    switch (sum % 7) {
    case 0:
        cout << "SUN" << endl;
        break;
    case 1:
        cout << "MON" << endl;
        break;
    case 2:
        cout << "TUE" << endl;
        break;
    case 3:
        cout << "WED" << endl;
        break;
    case 4:
        cout << "THU" << endl;
        break;
    case 5:
        cout << "FRI" << endl;
        break;
    case 6:
        cout << "SAT" << endl;
        break;
    }
    
}
