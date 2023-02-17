#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        deque<int> q;
        string p, input, num;
        int n;
        cin >> p >> n >> input;

        for (char c : input) {
            if (isdigit(c)) {
                num += c;
            }
            else if (!num.empty()) {  //GPT가 짜준 코드
                q.push_back(stoi(num));
                num = "";
            }
        }

        if (!num.empty()) {
            q.push_back(stoi(num));
        }

        /*for (int i = 0; i < strlen(input); i++) {
            if (input[i] > 47 && input[i] < 58) { 기존코드
                num = input[i] - 48;
                q.push_back(num);
            }
        }*/

        //for (int i = 0; i < p.length(); i++) {
        //    string a = p.substr(i, 1);

        //    if (a == "R") { reverse(q.begin(), q.end()); } // 이놈때메 OutOfBound가 나기 때문에 덱을 직접적으로 뒤집지않고 해결해야함 ///이놈이 문제 맞나...?
        //    else if (a == "D") {
        //        if (q.empty()) { cout << "error" << '\n'; goto skip; }
        //        else { q.pop_front(); }
        //    }
        //}

        int rCount = 0;
        for (int i = 0; i < p.length(); i++) {
            string a = p.substr(i, 1);
            if (a == "R") { 
                if (n < 0) { cout << "error" << '\n'; goto skip; }
                else { rCount++; }
            }
        }

        for (int i = 0; i < p.length(); i++) {
            string a = p.substr(i, 1);

            if (a == "D") {
                if (n <= 0) { cout << "error" << '\n'; goto skip; }
                else if (rCount % 2 == 0) { q.pop_front(); n--; }
                else if (rCount % 2 == 1) { q.pop_back(); n--; }
            }
        }

        if (n < 0) { cout << "error" << '\n'; goto skip; }
        else if ( n == 0) { cout << "[]" << '\n'; goto skip; }
        else {
            if (rCount % 2 == 0) {
                cout << "[";
                for (int i = 0; i < q.size() - 1; i++) { cout << q[i] << ","; }
                cout << q.back() << "]" << '\n';
            }

            else if (rCount % 2 == 1) {
                cout << "[";
                for (auto iter = q.back(); iter != q.front(); iter--) { cout << iter << ","; }
                cout << q.front() << "]" << '\n';
            }
        }

    skip:
        continue;
    }

    return 0;
}