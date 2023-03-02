#include<iostream>

#define endl '\n'
using namespace std;



int main()
{
    long n;
    cin >> n;


    long k[100];
    k[0] = 1;
    k[1] = 1;
    k[2] = 1;
    for (int t = 3; t < 100; t++) {
        k[t] = k[t - 3] + k[t - 2];
    }

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cout << k[num - 1] << endl;
    }
    


    return 0;
}