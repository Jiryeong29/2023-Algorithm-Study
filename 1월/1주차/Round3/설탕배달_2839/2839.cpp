#include <iostream>
using namespace std;


int main() {
	int in;
	cin >> in;
	int out = 0;
	while (in >= 0) {
		if (in % 5 == 0) {	
			out = out + (in / 5);
			cout << out << endl;
			return 0;
		}
		in = in - 3;	
		out++;
	}

	cout << -1 << endl;
}