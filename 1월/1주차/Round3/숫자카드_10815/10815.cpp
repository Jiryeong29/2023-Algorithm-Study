#include <iostream>
using namespace std;

int main() {
	int slen, clen;
	int input;
	
	cin >> slen;
	int* sang = new int[slen];
	for (int i = 0; i < slen; i++) {
		cin >> input;
		sang[i] = input;
	}

	cin >> clen;
	int* comp = new int[clen];
	int* output = new int[clen]();
	for (int i = 0; i < clen; i++) {
		cin >> input;
		comp[i] = input;
	}

	for (int i = 0; i < clen; i++) {
		for (int j = 0; j < slen; j++) {
			if (comp[i] == sang[j]) {
				output[i] = 1;
				continue;
			}
		}
	}

	for (int i = 0; i < clen; i++) {
		cout << output[i] << " ";
	}
}