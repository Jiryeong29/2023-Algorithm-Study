#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, k;
	cin >> N >> k;

	long* arr = new long[N];
	for (int i = 0; i < N; i ++) { cin >> arr[i]; }
	sort(arr, arr + N);
	cout << arr[N - k];
	delete[] arr;
	return 0;
}
