#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
using namespace std;

struct aa {
	int age;
	int join;
	string name;
};

bool compare(aa a1, aa a2){
	if (a1.age < a2.age) {
		return a1.age < a2.age;
	}
	else if (a1.age == a2.age) return a1.join < a2.join;
	else return false;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector<aa> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].age >> v[i].name;
		v[i].join = i;
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].age << " " << v[i].name << '\n';
	}
}
