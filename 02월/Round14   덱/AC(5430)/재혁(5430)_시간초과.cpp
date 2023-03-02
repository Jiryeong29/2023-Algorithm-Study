#include<iostream>
#include<list>
#define endl '\n'
using namespace std;

void change(string a, list<char>& arr) {
	for (int i = 1; i < a.size(); i += 2) {
		arr.push_back(a[i]);
	}
}

int AC(string p, list<char>& arr) {
	int rcount = 0;
	for (int i = 0; i < p.size(); i++) {
		if ((int)p[i] == 'R') {
			rcount++;
			continue;
		}
		
		if (rcount % 2 == 1) {
			arr.reverse();
			rcount = 0;
		}
		if (arr.size() <= 0) {
			return 0;
		}
		arr.pop_front();
	}
	return arr.size();
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, n;
	string p, tmp;
	
	cin >> T;
	
	for (int i = 0; i < T; i++) {

		cin >> p >> n >> tmp;
		list<char> arr;
		change(tmp, arr);

		n = AC(p, arr);

		if (!n) {
			cout << "error" << endl;
			continue;
		}

		cout << "[";
		list<char>::iterator it = arr.begin();
		for (int i = 0; i < n; i++,it++) {
			cout << *it;
			if (i != n - 1) { cout << ","; }
		}
		cout << "]" << endl;
	}

	return 0;
}