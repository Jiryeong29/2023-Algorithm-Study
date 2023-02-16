#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;

	getline(cin, str);

	for (int i = 0; i < str.length(); ++i) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			if (str[i] < 'N') { str[i] += 13; }
			else
				str[i] = (('A' - 1) + (13 - ('Z' - str[i])));

		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			if (str[i] < 'n') { str[i] += 13; }
			else
				str[i] = (('a' - 1) + (13 - ('z' - str[i])));
		}
		else
			continue;
	}


	cout << str;
}