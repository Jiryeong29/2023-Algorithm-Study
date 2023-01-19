#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string S;
	set <string> SS;

    cin >> S;

    string str = "";
    for (int i = 0; i < S.length(); i++) {
        for (int j = i; j < S.length(); j++) {
            str = str + S[j];
            SS.insert(str);
        }
        str = "";
    }

    cout << SS.size() << endl;

    return 0;
}