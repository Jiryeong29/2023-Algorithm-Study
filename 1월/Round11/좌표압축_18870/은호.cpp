#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, input;
	cin >> n;
	vector<int> v1(n), v2(n);

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v1[i] = input;
		v2[i] = input;
	}
	sort(v2.begin(), v2.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end()); // 중복값을 맨 뒤로 옮기면 그 삭제될 첫번째 iterator 반환

	for (int i = 0; i < n; i++)
		cout << lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin() << ' '; // 이진탐색으로 원소 탐색. 배열or벡터가 오름차순으로 정렬되어 있어야 함

	return 0;
}