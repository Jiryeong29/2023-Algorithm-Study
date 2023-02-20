#include <iostream>
#include <deque>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string p, arr_str;
        int n;
        cin >> p >> n >> arr_str;

        deque<int> arr;

        stringstream ss(arr_str.substr(1, arr_str.size() - 2));
        string num_str;
        while (getline(ss, num_str, ',')) {
            if (!num_str.empty()) {
                arr.push_back(stoi(num_str));
            }
        }

        bool is_reversed = false;
        bool has_error = false;
        for (char c : p) {
            if (c == 'R') {
                is_reversed = !is_reversed;
            }
            else {
                if (arr.empty()) {
                    has_error = true;
                    break;
                }
                if (is_reversed) {
                    arr.pop_back();
                }
                else {
                    arr.pop_front();
                }
            }
        }

        if (has_error) {
            cout << "error" << endl;
        }
        else {
            cout << "[";
            if (is_reversed) {
                for (auto it = arr.rbegin(); it != arr.rend(); it++) {
                    cout << *it;
                    if (it != arr.rend() - 1) {
                        cout << ",";
                    }
                }
            }
            else {
                for (auto it = arr.begin(); it != arr.end(); it++) {
                    cout << *it;
                    if (it != arr.end() - 1) {
                        cout << ",";
                    }
                }
            }
            cout << "]" << endl;
        }
    }

    return 0;
}