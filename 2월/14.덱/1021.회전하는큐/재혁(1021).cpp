#include<iostream>
#include<deque>
#define endl '\n'
using namespace std;


bool search_index(deque<int> &k,int num) {
	int count = 0;
	while (num != k[count])count++;
	int right = count;
	
	count = 1;
	int left = k.size()-1;
	while (num != k[left]) {
		left--;
		count++;
	}
	left = count;
	if (right < left)return true;
	else return false;
}




int main()
{
	int N, M;
	cin >> N >> M;

	deque<int> arr;
	for (int i = 1; i < N+1; i++) {
		arr.push_back(i);
	}

	int* num = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> num[i];
	}


	int count = 0;

	for (int i = 0; i < M; i++) {

		

		if (search_index(arr, num[i])) {
			while (arr[0] != num[i]) {
				arr.push_back(arr.front());
				arr.pop_front();
				count++;
			}
			arr.pop_front();
		}
		else {
			while (arr[0] != num[i]) {
				arr.push_front(arr.back());
				arr.pop_back();
				count++;
			}
			arr.pop_front();
		}
	}
	cout << count;

	return 0;
}