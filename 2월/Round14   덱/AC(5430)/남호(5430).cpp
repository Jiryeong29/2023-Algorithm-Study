//런타임 에러
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {
    int n;
    string s;
    int m;
    cin >> n;
    while (n--) {
        s = "";
        deque <int> d;
        int reverse = 0;
        cin >> s;
        cin >> m;
        string s2;
        cin >> s2;
        string tmp = "";
        string s3= "";
        if (m == 0) {
            cout << "error" << '\n';
            continue;
        }
        if (m <= s.length()) {
            cout << "error" << '\n';
            continue;
        }
        for (int i = 0; i < s2.length(); i++) {
           
            if (i % 2 == 1) {
                tmp = s2[i];
                d.push_back(stoi(tmp));
                tmp = "";            
            }
        }
        for (auto a : s) {
            if (a == 'R') {
                reverse++;
            }
            else {
                if (reverse % 2 == 0) {
                    d.pop_front();
                }
                else {
                    d.pop_back();
                }

            }
        }
        
        cout << '[';
        if (reverse % 2 == 0) {
            for (int i = 0; i < d.size(); i++) {
                if (i == d.size() - 1) {
                    cout << d[i];
                    break;
                }
                cout << d[i] << ',';

            }
        }
        else {
            for (int i = d.size() - 1; i >= 0; i--) {
                if (i == 0) {
                    cout << d[i];
                    break;
                }
                cout << d[i] << ',';
            }
        }
        cout << ']' << '\n';
    }

}
//비슷한거
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string rd;
		cin >> rd;
		int num;
		cin >> num;
		//vector<int> v; //vector 삭제 맨 앞 O(n) 맨 뒤 O(1)
		deque<int> dq;  //deque 삭제 맨 앞 O(1) 맨 뒤 O(1)
		string s;
		cin >> s;
		string temp;
		for (int j = 0; j < s.size(); j++) {
			if (isdigit(s[j])) {
				temp += s[j];
			}
			else {
				//수가 존재할 때
				if (temp != "") {
					dq.push_back(stoi(temp));
					temp = "";
				}
			}
		}

		int error_check = 0;
		
		int r = 0; // r이 홀수면 거꾸로, r이 짝수면 그대로
		for (int j = 0; j < rd.size(); j++) {
			if (rd[j] == 'R') {
				r++;
			}
			else {
				if (dq.empty()) {
					cout << "error" << "\n";
					error_check = 1;
					break;
				}
				//짝수 : 가장 앞 버리기
				if (r % 2 == 0) {
					dq.pop_front();
				}
				//홀수 : 가장 뒤 버리기
				else {
					dq.pop_back();
				}
			}
		}

		if (error_check == 0) {
			cout << "[";
			if (r % 2 == 1) {
				//홀수일 때 뒤집어서 출력
				for (int j = dq.size()-1; j >= 0; j--) {
					cout << dq[j];
					if (j != 0)
						cout << ",";
				}
			}
			else {
				for (int j = 0; j < dq.size(); j++) {
					cout << dq[j];
					if (j != dq.size() - 1)
						cout << ",";
				}
			}
			cout << "]" << "\n";
		}
	}

	return 0;
}
