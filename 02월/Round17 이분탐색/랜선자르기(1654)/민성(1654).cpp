#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>

#define INF 1000000001
using namespace std;

int k, n; 
vector<int> lan; 

void input() {
    cin >> k >> n;
    lan.assign(k, 0); 

    for (int i = 0; i < k; ++i) {
        cin >> lan[i];
    }
}


bool isPossible(int len) {
    
    int cnt = 0;

    for (int i = 0; i < k; ++i) {
        cnt += lan[i] / len;
    }

    if (cnt >= n)    return true;
    else    return false;
}

void solve() {
    sort(lan.begin(), lan.end());

    unsigned int left = 1, right = lan[lan.size() - 1];
    unsigned int result = 0;

    while (left <= right) {
        unsigned int mid = (left + right) / 2;

        if (isPossible(mid)) {
            result = max(result, mid);
            left = mid + 1;
        }
    
        else {
            right = mid - 1;
        }
    }
    cout << result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    input();
    solve();

    return 0;
}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector <int> v1;
//
//bool check(int val, int N) {
//
//	int a = 0;
//	for (int i = 0; i < v1.size(); i++) {
//		a += v1[i] / val;
//	}
//
//	if (a >= N) { return true; }
//	else { return false; }
//}
//
//int brute(int val, int N) {
//
//	if (check(val, N)) { return val; }
//
//	else { return brute(val - 1, N); }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int K, N, in, start, sum = 0;;
//
//	cin >> K >> N;
//
//	for (int i = 0; i < K; i++) {
//		cin >> in;
//		sum += in;
//		v1.push_back(in);
//	}
//
//	start = sum / N;
//	
//	cout << brute(start, N);
//
//}