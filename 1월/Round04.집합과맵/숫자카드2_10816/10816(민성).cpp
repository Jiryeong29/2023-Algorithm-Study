#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int arr[500002];
int N, M, card;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> card;
		arr[i] = card;
	}

	sort(arr, arr + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> card;
		cout << upper_bound(arr, arr + N, card) - lower_bound(arr, arr + N, card) << " "; //card이상의 값이 처음 나오는 지점 & card를 초과하는 값이 처음 나오는 지점
	}

//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	multiset<int> ms;
//
//	for (int i = 0; i < N; i++)
//	{
//		int num;
//		cin >> num;
//		ms.insert(num);
//	}
//
//	int M;
//	cin >> M;
//	for (int i = 0; i < M; i++)
//	{
//		int num;
//		cin >> num;
//		cout << ms.count(num) << " ";
//	}
//	return 0;
//}