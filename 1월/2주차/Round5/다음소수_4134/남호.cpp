#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<math.h>
using namespace std;

bool aa(long long x) {
	for (long long i = 2; i * i < x+1; i++) {
			if (x % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> m;
		while (1) {
			if (m == 0 || m == 1) {
				cout << 2 << endl;
				break;
			}
			
			if (aa(m)) {
				cout << m << endl;
				break;
			}
			m++;
		}
	}

}

//sqrt가 오차 생겨서 틀림
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<math.h>
using namespace std;

bool aa(long long x) {
	for (long long i = 2; i < sqrt(x)+1; i++) {
			if (x % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> m;
		while (1) {
			if (m == 0 || m == 1) {
				cout << 2 << endl;
				break;
			}
			
			if (aa(m)) {
				cout << m << endl;
				break;
			}
			m++;
		}
	}

}
