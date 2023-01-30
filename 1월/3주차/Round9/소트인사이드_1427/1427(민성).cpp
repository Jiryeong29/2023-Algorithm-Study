#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string input;
    cin >> input;

    sort(input.begin(), input.end(), greater<char>());

    cout << input;

    return 0;
}