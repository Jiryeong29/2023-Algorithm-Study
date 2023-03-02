#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int i;
long long sq[101]; //sequence


long long fado(int n) {
    sq[1] = sq[2] = sq[3] = 1;
    sq[4] = sq[5] = 2;
    
  
    for (i = 6; i <= n; i++) {
        sq[i] = sq[i - 5] + sq[i - 1];

        
    }
    return sq[n];
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t, n;
    cin >> t;
    

    for (int j = 0; j < t; j++) {
        cin >> n;
        cout << fado(n) << endl;
    }


    return 0;
}
