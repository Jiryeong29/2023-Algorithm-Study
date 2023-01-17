#include <iostream>
#include <string>
using namespace std;
int main() {
    int len, sum = 0;
    string str;
    cin >> len >> str;
    for (int i = 0; i < len; i++) {
        int temp = str[i] - '0';
        sum += temp;
    }
    cout << sum;
}