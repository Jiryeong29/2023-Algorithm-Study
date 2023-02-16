#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int cnt[8001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,sum=0;
	cin >> n;
	vector<int> v(n);
	map<int,int> mp;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
		mp.insert({v[i],0 });
		cnt[v[i] + 4000]++;
	}
	
	sort(v.begin(), v.end());
	
	for (int i = 0; i < n; i++) {
		
	}

	cout << sum / n << endl;//산술평균
	cout << v[n / 2 + 1] << endl; // 중앙값
	// 최빈값, 여러개 있을때 두번째로 작은값 출력
	// 범위출력

	
}