#include <bits/stdc++.h>
using namespace std;


int arr[100005];
int n;

int binarysearch(int target)
{
	int start = 0; 
	int end = n - 1;

	while (start <= end) {
		int mid = (start + end)/2;
		if (arr[mid] < target)
			start = mid + 1;
		else if (arr[mid] > target)
			end = mid - 1;
		else
			return 1;
	}
	return 0;
}

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int m;
	cin >> m;

	while (m--) {
		int target;
		cin >> target;
		cout << binarysearch(target) << '\t';
	}
}